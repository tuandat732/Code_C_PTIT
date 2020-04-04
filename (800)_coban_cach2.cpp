#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a=n;
	int b=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=b;j<=a;j++) printf("%d ",j);
		printf("\n");
	    b=b+n+n;
        a=a+n;
	}
return 0;
}


