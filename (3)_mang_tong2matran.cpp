#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int a[100][100],b[100][100],n,m;
    scanf("%d%d",&n,&m);
    for (int i=0;i<n;i++)
    	for (int j=0;j<m;j++) scanf("%d",&a[i][j]);
    for (int i=0;i<n;i++)
    	for (int j=0;j<m;j++) scanf("%d",&b[i][j]);
    for (int i=0;i<n;i++){
    	for (int j=0;j<m;j++)
        printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
	}
    	
return 0;
}

