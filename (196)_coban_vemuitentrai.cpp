#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n*2-1;j++){
    		if(j<=n-i) printf("~");
    		else if(j<=n*2-i*2+1) printf("*");
		}
		printf("\n");
	}
	for (int i=2;i<=n;i++){
    	for (int j=1;j<=n*2-1;j++){
    		if(j<=i-1) printf("~");
    		else if(j<=i*2-1) printf("*");
		}
		printf("\n");
	}
return 0;
}

