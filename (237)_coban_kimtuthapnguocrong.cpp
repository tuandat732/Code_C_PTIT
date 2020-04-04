#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n*2-1;j++){
			if(j<i) printf("~");
			else if(i==1) printf("*");
			else if(j>i&&j<n*2-i) printf(".");
			else if(j==n*2-i||j==i) printf("*");
		}
		printf("\n");
	}
return 0;
}



