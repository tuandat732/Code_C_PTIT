#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
		for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) {
		if(j<n-i-1) printf("~");
		else if(i==n-1) printf("*");
		else if(j==n-i-1||j==n-1) printf("*");
		else printf(".");}
		printf("\n");
	}
return 0;
}
