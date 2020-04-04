#include<stdio.h>
#include<math.h>
int kt(int n){
	if(n%2==0) return 1;
	return 0;
}
int main(){
	int a[1000],n,dem=0,dem1=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++) 
		if(kt(a[i])==0) dem++;
		printf("%d ",dem); 
	for (int i=1;i<=n;i++)  if(kt(a[i])==0) printf("%d ",a[i]);
	printf("\n");
	for (int i=1;i<=n;i++) 
		if(kt(a[i])==1) dem1++;
		printf("%d ",dem1); 
	for (int i=1;i<=n;i++)  if(kt(a[i])==1) printf("%d ",a[i]);
return 0;
}


