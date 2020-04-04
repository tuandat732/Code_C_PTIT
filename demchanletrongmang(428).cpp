#include<stdio.h>
#include<math.h>
int main(){
	int n,a[1000],dem=0,dem1=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++){
		if(a[i]%2==0) dem++;
		else dem1++;
		}
		printf("%d %d",dem,dem1);
return 0;
}


