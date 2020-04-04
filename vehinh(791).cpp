#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for (int k=1;k<=n*n;k++) printf("%d",k);
			
		}
	}
return 0;
}


