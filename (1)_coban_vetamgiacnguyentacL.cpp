#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n,a=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
	    if(i%2!=0) for(int j=i;j<=i*2-1;j++) printf("%d",j);
	    else for (int j=i*2-1;j>=i;j--) printf("%d",j);
		printf("\n");
	}
return 0;
}

