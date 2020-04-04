#include<stdio.h>
#include<math.h>
int main(){
		int n,m,b=1;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++) printf("%d",b);
		b++;
		printf("\n");
	}
return 0;
}


