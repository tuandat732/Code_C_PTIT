#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
 int a[100][100],n,tong=0,tong1=0;
 scanf("%d",&n);
 for (int i=0;i<n;i++)
 for (int j=0;j<n;j++)
 scanf("%d",&a[i][j]);
 for (int i=0;i<n;i++)
 for (int j=0;j<n;j++)
 if(j>i)
 tong=tong+a[i][j];
  for (int i=0;i<n;i++)
 for (int j=0;j<i;j++)
 tong1=tong1+a[i][j];
 printf("%d %d",tong,tong1);
return 0;
}

