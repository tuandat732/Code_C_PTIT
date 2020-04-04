#include<stdio.h>
#include<math.h>
#include<string.h>
int gthua(int n){
	long long tich=1;
	for (int j=1;j<=n;j++) tich=tich*j;
	return tich;
}

int main(){
	int n,m,dem=0;
	scanf("%d%d",&n,&m);
	if(n<=0||m<=0) printf("0");
	else{
	for (int i=n;i<=m;i++){
		long long tong=0;
		int kt=i;
		while(kt>0){
			int k=kt%10;
			tong=tong+gthua(k);
			kt=kt/10;
		}
		if(i==tong) {
		printf("%d ",i);
		dem++;
	}}
	if(dem==0) printf("0");}
return 0;
}

