#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],n,m;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for (int i=1;i<=n;i++){
		if(i==m) continue;
		else printf("%d ",a[i]);
	}
return 0;
}


