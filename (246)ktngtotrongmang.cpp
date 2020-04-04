#include<stdio.h>
#include<math.h>
int kt(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int main(){
	int a[1000],dem=0,n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++) if(kt(a[i])==1) dem++;
	printf("%d ",dem);
	for (int i=1;i<=n;i++) if(kt(a[i])==1) printf("%d ",a[i]); 
return 0;
}


