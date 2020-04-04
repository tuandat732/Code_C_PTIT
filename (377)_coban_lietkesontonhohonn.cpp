#include<stdio.h>
#include<math.h>
int kt(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=2;i<=n;i++) if(kt(i)==1) printf("%d ",i);
return 0;
}


