#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int daonguoc(int n){
	int tong=0,m=n;
	while(n>0){
		tong=tong*10+n%10;
		n=n/10;
	}
	return tong;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=n;i<=m;i++){
		if(i>10&&daonguoc(i)!=i){
			if(kt(i)==1&&kt(daonguoc(i))==1){
				
			}
		}
		
	}
return 0;
}

