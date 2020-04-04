#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a,b,min,max;
    scanf("%d%d",&a,&b);
	if(a<b){
		min=a; max=b;
	}
	else{
		min=b; max=a;
	}
	for (int i=min;i>=1;i--) 
		if(a%i==0&&b%i==0){
		printf("%d ",i);
		break;}
	for (int i=max;i<=a*b;i++) 
		if(i%a==0&&i%b==0){
		printf("%d",i);
		break;}
return 0;
}

