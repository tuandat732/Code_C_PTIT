#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		if(j<n-i-1) printf("~");
		for (int j=1;j<n*2;j+=2)
		if(j<=i*2+1) printf("%d",j);
		for (int j=n*2-1;j>=1;j-=2)
		if(j<i*2+1) printf("%d",j);
		printf("\n");
	}

return 0;
}

