#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int a,b;
   scanf("%d%d",&a,&b);
   int c=(a+b-abs(a-b))/2;
   for(int i=c;i>0;i--)
   if(a%i==0&&b%i==0) {
   	printf("%d",i);
   	break;
   }
return 0;
}

