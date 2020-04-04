
#include<stdio.h>
#include<math.h>
#include<string.h>
int a[50][50];
void sx(int n){
	int cot=n-1,hang=n-1,ind=1,d=0;
	while(d<=n/2){
	for (int i=d;i<=cot;i++) a[d][i]=ind++;
	for (int i=d+1;i<=hang;i++) a[i][cot]=ind++;
	for (int i=cot-1;i>=d;i--) a[hang][i]=ind++;
	for (int i=hang-1;i>d;i--) a[i][d]=ind++;
	d++;
	hang--;
	cot--;
}
}
int main(){
	int n;
	scanf("%d",&n);
	sx(n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
return 0;
}

