#include<stdio.h>
#include<math.h>
int kt(int n){
	int tong=3;
	for (int j=n/2;j>2;j--) if(n%j==0) tong=tong+j;
	if(tong==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(kt(n)==1) printf("1");
	else printf("0");
return 0;
}


