#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],n,b=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++){
		if(a[i]!=a[n+1-i]) b=0;
	}
	if(b==1) printf("1");
	else printf("0");
return 0;
}


