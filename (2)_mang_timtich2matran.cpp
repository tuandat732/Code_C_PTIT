#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int n,m,a[100][100],b[100][100],c[100][100];
     scanf("%d%d",&n,&m);
     for (int i=0;i<n;i++)
     for (int j=0;j<m;j++) scanf("%d",&a[i][j]);
     for (int i=0;i<m;i++)
     for (int j=0;j<n;j++) scanf("%d",&b[i][j]);
     for (int i=0;i<n;i++)
     for (int j=0;j<n;j++){
     for(int k=0;k<m;k++){
     	c[i][j]=a[i][k]*b[k][j]+c[i][j];
	 }
	 }
	 for (int i=0;i<n;i++){
     for (int j=0;j<n;j++) printf("%d ",c[i][j]);
     printf("\n");}
	 
     
return 0;
}

