#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int n,m=0,a=1;
   scanf("%d",&n);
   int k=n;
   for(int i=2;i<=n;i++){
   	while(n%i==0) {
	printf("%d",i);
	a=a*i;
	if(a<k) printf("x");
   	n=n/i;}
   }
return 0;
}

