#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     long long a[1000],c=0,b=1,n,m=1;
     scanf("%lld",&n);
     a[1]=0; a[2]=1;
     for(int i=3;i<=50;i++){
     	a[i]=c+b;
     	c=b;
     	b=a[i];
	 }
	 for (int i=1;i<=50;i++) {
	 if(n!=a[i]) m=0;
	 }
	 if(m==1) printf("1");
	 else printf("0");

return 0;
}

