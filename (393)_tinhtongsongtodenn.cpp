#include<stdio.h>
#include<math.h>
int kt(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int main(){
	int n,tong=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) if(kt(i)==1) tong=tong+i;
	printf("%d",tong);
return 0;
}


