#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<m+i;j++){
			if(j<i) printf("~");
			else if(j<=m+i) printf("*");
		}
		printf("\n");
	}
	
return 0;
}


