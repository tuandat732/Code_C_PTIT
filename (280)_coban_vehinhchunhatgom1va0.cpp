#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1||i==n) printf("1");
			else if(j==1||j==m) printf("1");
			else printf("0");
		}
		printf("\n");
	}
return 0;
}


