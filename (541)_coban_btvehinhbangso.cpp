#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	for (int j=i;j>=1;j--)  printf("%d ",j);
    	for (int j=2;j<=n-i+1;j++) printf("%d ",j);
    		printf("\n");
		
	}
return 0;
}

