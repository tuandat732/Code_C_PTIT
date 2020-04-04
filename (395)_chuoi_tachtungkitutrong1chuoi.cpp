#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   char a[100];
   gets(a);
   int n=strlen(a);
   for (int i=0;i<n;i++){
   	printf("%c ",a[i]);
   }
return 0;
}

