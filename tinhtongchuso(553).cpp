#include<stdio.h>
#include<math.h>
int main(){
	int a,b,tong=0;
	scanf("%d",&a);
	while(a>0){
		b=a%10;
		tong=tong+b;
		a=a/10;
		}
		printf("%d",tong);
return 0;
}


