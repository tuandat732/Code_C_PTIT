#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct svien
{
  char ten[50];
  int msv;
  float da,db,dc;
} sv;
sv s[1000];

int dem(){
	int count=0;
	FILE *f=fopen("B18DCAT050.bin","rb");
	while(fgetc(f)!=EOF){
		count++;
		fseek(f,sizeof(sv),SEEK_CUR);
	}
	fclose(f);
	return count;
}

void them(int n){
	FILE *f=fopen("B18DCAT050.bin","ab");
	int c =dem();
	for (int i=0;i<n;i++){
		sv v;
		v.msv=i+1+c;
		fflush(stdin);
		gets(v.ten);
		fflush(stdin);
		scanf("%f%f%f",&v.da,&v.db,&v.dc);
		fseek(f,0,SEEK_END);
		fwrite(&v,sizeof(v),1,f);
	}
	fclose(f);
}

void sua(int n){
	FILE *f=fopen("B18DCAT050.bin","rb+");
	fseek(f,sizeof(sv)*(n-1),SEEK_SET);
	sv v;
	v.msv=n;
	fflush(stdin);
	gets(v.ten);
	scanf("%f%f%f",&v.da,&v.db,&v.dc);
	fwrite(&v,sizeof(sv),1,f);
	fclose(f);
}

void doc(){
	FILE *f=fopen("B18DCAT050.bin","rb+");
	int i=0;
	while(fgetc(f)!=EOF){
		fseek(f,sizeof(sv)*i,SEEK_SET);
		fread(&s[i],sizeof(sv),1,f);
		i++;
	}
}
float tong(int vitri){
	return s[vitri].da+s[vitri].db+s[vitri].dc;
}
void hienthi(){
	doc();
	for (int i=0;i<dem();i++){
		for (int j=i+1;j<dem();j++){
			if(tong(j)<tong(i)){
				sv temp=s[j];
				s[j]=s[i];
				s[i]=temp;
			}
		}
	}
	for (int i=0;i<dem();i++){
				printf("%d %s %.1f %.1f %.1f\n",s[i].msv,s[i].ten,s[i].da,s[i].db,s[i].dc);
			}
}

int main(){
	int n,m;
	scanf("%d",&n);
	switch(n){
		case 1:
			scanf("%d",&m);
			them(m);
			printf("%d\n",m);
			break;
		case 2:
			scanf("%d",&m);
			sua(m);
			printf("%d\n",m);
			break;
		case 3:
			hienthi();
			break;
	}
return 0;
}

