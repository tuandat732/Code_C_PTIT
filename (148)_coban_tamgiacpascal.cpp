#include<stdio.h>
#include<math.h>
#include<string.h>
int pas(int k,int n){
	if(k==0||k==n) return 1;
	else if(k==1) return n;
	return pas(k-1,n-1)+pas(k,n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++) if(j<n-i-1) printf(" ");
		for (int j=0;j<i+1;j++){
			printf("%d ",pas(j,i));
		}
		printf("\n");
	}

return 0;
}

