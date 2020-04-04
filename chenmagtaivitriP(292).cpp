#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],b[1000],n,m,k;
	scanf("%d%d",&n,&m);
	if(n>1&&m>1){
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=m;i++) scanf("%d",&b[i]);
	scanf("%d",&k);
	if(k>0){
	for (int i=1;i<=n;i++){
		if(i==k){
			printf("%d ",a[i]);
			for (int j=1;j<=m;j++) printf("%d ",b[j]);
		}
		else printf("%d ",a[i]);
		}}
		else if(k==0){
			for (int j=1;j<=m;j++) printf("%d ",b[j]);
			for (int i=1;i<=n;i++) printf("%d ",a[i]);
		}}
return 0;
}


