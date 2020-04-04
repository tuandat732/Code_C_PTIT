#include<stdio.h>
#include<math.h>
int main(){
	int a,b,socuoi,sodau,c;
	scanf("%d",&a);
	c=a;
	while(a>0){
       b=a%10;
       if(a==c) socuoi=b;
    if(a<10) sodau=b;
       a=a/10;}
		printf("%d %d",sodau,socuoi);
return 0;
}
