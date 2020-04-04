#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(j==1||i==1) printf("*");
			else if(j>1&&j<=n-i) printf(".");
			else if (j==n+1-i) printf("*");
		}
		printf("\n");
	}
return 0;
}


