#include<stdio.h>
#include<math.h>
int chuyen(int a){
	int b=a,nguoc=0;
	while(a>0){
		int c=a%10;
		nguoc=nguoc*10+c;
		a=a/10;
	}
	if(nguoc==b) return 1;
	return 0;
}
int main(){
	int a[1000],n,dem=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++)
	if(a[i]>10&&chuyen(a[i])==1) dem++;
	printf("%d ",dem);
	for (int i=1;i<=n;i++)
	if(a[i]>10&&chuyen(a[i])==1) printf("%d ",a[i]);
return 0;
}


