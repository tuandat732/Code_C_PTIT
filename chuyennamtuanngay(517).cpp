#include<stdio.h>
#include<math.h>
int main(){
	int a,n,t,d;
	scanf("%d",&a);
	n=a/365;
	t=(a-n*365)/7;
	d=a-365*n-t*7;
	printf("%d %d %d",n,t,d);
return 0;
}


