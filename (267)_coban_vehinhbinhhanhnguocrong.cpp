#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int n,m;
   scanf("%d%d",&n,&m);
   for (int i=1;i<=n;i++){
   	for (int j=1;j<=m+i-1;j++){
   		if(j<i) printf("~");
   		else if(i==1||i==n) printf("*");
   		else if (j==i||j==i+m-1) printf("*");
   		else printf(".");
	   }
	   printf("\n");
   }
return 0;
}
