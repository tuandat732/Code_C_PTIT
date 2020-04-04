#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=a;i++)
    for (int j=1;j<=b;j++){
    	if(i%2!=0) if(i==a/2+1) printf("0");
    	else if(i==a/2||i==a/2+1) printf("0");
    	if(j%2!=0) if(j==b/2+1) printf("0");
    	else if(j==b/2||j==b/2+1) printf("0");
    	else printf("1");
		}
return 0;
}

