#include<stdio.h>
#include<math.h>
int kt(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int main(){
	int a[100][100],n,tong=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
	for (int i=0;i<n;i++)
	for (int j=0;j<=i;j++){
		if(kt(a[i][j])==1) tong=tong+a[i][j];
	}
	printf("%d",tong);
return 0;
}


