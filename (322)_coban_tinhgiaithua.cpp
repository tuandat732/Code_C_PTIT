#include<stdio.h>
#include<math.h>
int main(){
	unsigned long long n,tich=1;
	scanf("%d",&n);	
	for (int i=1;i<=n;i++) tich=tich*i;
	printf("%lld",tich);
return 0;
}


