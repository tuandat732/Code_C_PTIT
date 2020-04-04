#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(i==n) printf("*");
			else if(j==i||j==1) printf("*");
			else if(j<i) printf(".");
		}
		printf("\n");
	}
return 0;
}


