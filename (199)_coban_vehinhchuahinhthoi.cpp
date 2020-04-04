#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	for (int j=1;j<=n*2;j++){
		if(i==1) printf("*");
		else if(j>n-i+1&&j<n+i) printf("~");
		else printf("*");
	}
		printf("\n");
	}
		for (int i=1;i<n;i++){
	for (int j=1;j<=n*2;j++){
		if(i==n) printf("*");
		else if(j>i+1&&j<=n*2-i-1) printf("~");
		else printf("*");
	}
		printf("\n");
	}
	
	
return 0;
}


