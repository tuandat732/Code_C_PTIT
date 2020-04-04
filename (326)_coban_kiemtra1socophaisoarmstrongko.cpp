#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
	int m=n,tong=0,dem=0,k=n;
	while(m>0){
		m=m/10;
		dem++;
	}
	while(n>0){
		int b=n%10;
		tong=tong+pow(b,dem);
		n=n/10;
	}
	if(tong==k) return 1;
	return 0;
}
int main(){
     int n;
     scanf("%d",&n);
    if(kt(n)==1) printf("1");
    else printf("0");
return 0;
}

