#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,songuoc=0;
    scanf("%d",&a);
    while(a>0){
    b=a%10;
    songuoc=songuoc*10+b;
    a=a/10;}
    printf("%d",songuoc);
	return 0;
}

