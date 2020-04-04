#include<stdio.h>
#include<math.h>
int kt(int n){
	int tong=3;
	for (int j=n/2;j>2;j--) if(n%j==0) tong=tong+j;
	if(tong==n) return 1;
	return 0;
}
int main(){
	int a,b,tong=0;
	scanf("%d%d",&a,&b);
	if(a>b) for (int i=6;i<a;i++){
	  if(kt(i)==1) printf("%d ",i);
	}
	else for (int i=6;i<b;i++){
	  if(kt(i)==1) printf("%d ",i);
	}
return 0;
}


