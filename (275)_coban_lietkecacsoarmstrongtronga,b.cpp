#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(long long n){
	long long m=n,tong=0,dem=0,k=n;
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
     long long a,b;
     scanf("%lld%lld",&a,&b);
   for(long long i=a;i<=b;i++)
    if(kt(i)==1) printf("%lld ",i);
    
return 0;
}
