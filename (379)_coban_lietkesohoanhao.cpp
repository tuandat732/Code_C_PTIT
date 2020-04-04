#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
	int tong=0;
	for (int i=1;i<=n-1;i++)
	if(n%i==0)
	tong=tong+i;
	if(tong==n) return 1;
	return 0;
}
int main(){
     int n,m;
     scanf("%d%d",&n,&m);
     for (int i=n;i<=m;i++)
     if(kt(i)==1) printf("%d ",i);
return 0;
}

