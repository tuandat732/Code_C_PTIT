#include<stdio.h>
#include<math.h>
int main(){
	int a,b,tich=1;
	scanf("%d",&a);
	while(a>0){
	b=a%10;
	tich=tich*b;
	a=a/10;}
	printf("%d",tich);
return 0;
}


