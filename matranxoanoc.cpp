#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
   int n,a[50][50];
   scanf("%d",&n);
   int hang=n-1,cot=n-1,k=n*n,d=0;
   while(d<=n/2){
   	for (int i=d;i<=cot;i++)	a[d][i]=k--;
   	for (int i=d+1;i<=hang;i++) a[i][cot]=k--;
   	for (int i=cot-1;i>=d;i--) a[hang][i]=k--;
   	for (int i=hang-1;i>d;i--) a[i][d]=k--;
   	cot--; hang--;d++;
   }
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");}
return 0;
}

