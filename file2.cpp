#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct quanli{
	int masv;
	char name[100];
	float diem[3];
}sv;
sv s[100];
int count(){
	FILE *f=fopen("B18DCAT.bin","rb");
	int c=0;
	while(fgetc(f)!=EOF){
		c++;
		fseek(f,sizeof(sv),SEEK_CUR);
	}
	fclose(f);
	return c;
}

void them(int n){
	int c=count();
	FILE *f=fopen("B18DCAT.bin","ab");
	for (int i=0;i<n;i++){
		sv s;
		s.masv=i+1+c;
		fflush(stdin);
		gets(s.name);
		for (int j=0;j<3;j++) scanf("%f",&s.diem[j]);
		fseek(f,0,SEEK_END);
		fwrite(&s,sizeof(s),1,f);
	}
	fclose(f);
}
void sua(int n){
	FILE *f=fopen("B18DCAT.bin","rb+");
	fseek(f,sizeof(sv)*(n-1),SEEK_SET);
	sv s;
	s.masv=n;
	fflush(stdin);
	gets(s.name);
	for (int i=0;i<3;i++) scanf("%f",&s.diem[i]);
	fwrite(&s,sizeof(sv),1,f);
}
void doc(){
	FILE *f=fopen("B18DCAT.bin","rb");
	int n=count();
	for (int i=0;i<n;i++){
		fseek(f,sizeof(sv)*i,SEEK_SET);
		fread(&s[i],sizeof(sv),1,f);
	}
	for (int i=0;i<n;i++) printf("%d %s %f %f %f %f\n",s[i].masv,s[i].name,s[i].diem[0],s[i].diem[1],s[i].diem[2]);
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
			doc();
			break;
	}
return 0;
}

