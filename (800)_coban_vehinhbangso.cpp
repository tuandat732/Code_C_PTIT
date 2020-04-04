#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n*n;i++){
		if(i%n==0) {
			printf("%d ",i);
			printf("\n");
		}
		else printf("%d ",i);
		 
		
	}
return 0;
}


