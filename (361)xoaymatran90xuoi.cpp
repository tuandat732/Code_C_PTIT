#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
	
	for (int j=0;j<n;j++){
	for (int i=n-1;i>=0;i--) printf("%d ",a[i][j]);
	printf("\n");}
return 0;
}



