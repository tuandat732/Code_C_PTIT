#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int n,dem=0;
     scanf("%d",&n);
     for (int i=2;i<=n;i++){
     	while(n%i==0) {
     		dem++;
     		n=n/i;
		 }
     	if(dem>=1) printf("%d ",i);
     	dem=0;
	 }
return 0;
}

