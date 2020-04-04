#include<stdio.h>
#include<math.h>
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
	for (int j=n-1;j>=0;j--){
	for (int i=n-1;i>=0;i--) printf("%d ",a[j][i]);
	printf("\n");}
return 0;
}

/1 2 3
 4 5 6
 7 8 9
 
 9 8 7
 6 5 4
 3 2 1


