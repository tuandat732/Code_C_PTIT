#include<stdio.h>
#include<math.h>
#include<string.h>
struct sanpham{
	int masp;
	char ten[100];
	float gn,gx;
};
typedef struct sanpham sanpham;
void nhap(int &n,sanpham sp[]){
	for (int i=0;i<n;i++){
		sp[i].masp=i+1;
		fflush(stdin);
		gets(sp[i].ten);
		fflush(stdin);
		scanf("%f%f",&sp[i].gn,&sp[i].gx);
	}
}	
void xuat(int &n,sanpham sp[]){
	FILE *f=fopen("B18DCAT050.bin","wb");
	for (int i=0;i<n;i++){
		fprintf(f,"%d\n",i+1);
		fputs(sp[i].ten,f);
		fprintf(f,"\n%.2f %.2f\n",sp[i].gn,sp[i].gx);
	}
	fclose(f);
}
int main(){
	sanpham sp[100];
	int n;
	scanf("%d",&n);
	nhap(n,sp);
	xuat(n,sp);
return 0;
}

