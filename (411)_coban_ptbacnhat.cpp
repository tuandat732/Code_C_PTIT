#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   float a,b;
   scanf("%f%f",&a,&b);
   if(a==0&&b==0) printf("VSN");
   if(a==0&&b!=0) printf("VN");
   if(a!=0) printf("%.2f",-b/a);
return 0;
}

