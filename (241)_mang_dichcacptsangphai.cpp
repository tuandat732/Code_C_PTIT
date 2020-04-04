#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n,m;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	;
	for (int i=m+1;i<=n;i++) printf("%d ",a[i]);
	for (int i=1;i<=m;i++) printf("%d ",a[i]);
return 0;
}


