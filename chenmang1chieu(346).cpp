#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],b[1000],n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=m;i++) scanf("%d",&b[i]);
	for (int i=1;i<=n;i++){
		if(i==p) {
			printf("%d ",a[i]);
		for (int j=1;j<=m;j++) printf("%d ",b[j]);
		}
		else printf("%d ",a[i]);
	}
return 0;
}


