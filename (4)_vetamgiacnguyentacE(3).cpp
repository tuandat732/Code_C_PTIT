#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for (int i=1;i<=n*2;i+=2){
    	for (int j=i;j<=n*2;j+=2)
		printf("%d",j);
    	printf("\n");
	}
return 0;
}

