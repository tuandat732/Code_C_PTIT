#include<stdio.h>
#include<math.h>
int main(){
	int n,b,dem=0,dem1=0;
	scanf("%d",&n);
	while(n>0){
		b=n%10;
		if(b%2==0) dem++;
		else dem1++;
		n=n/10;
	}
	printf("%d %d",dem1,dem);
return 0;
}


