#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int main(){
	int n,a[100][100],m=2,b[100];
	scanf("%d",&n);
	for (int i=0;i<n*n;i++){
		while(kt(m)!=1){
			m++;
		}
		b[i]=m++;
	}
	int d=0,gt=0,hang=n-1,cot=n-1;
	while(d<=n/2){
		for (int i=d;i<=cot;i++) a[d][i]=b[gt++];
		for(int i=d+1;i<=hang;i++) a[i][cot]=b[gt++];
		for (int i=cot-1;i>=d;i--) a[hang][i]=b[gt++];
		for (int i=hang-1;i>d;i--) a[i][d]=b[gt++];
		d++; hang--; cot--;
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
return 0;
}

