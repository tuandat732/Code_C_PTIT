#include<stdio.h>
#include<math.h>
int sont(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int tong(int n){
	int tong=0,d=0;
	while (n>0){
		int b=n%10;
		if(sont(b)!=1) d=1;
		n=n/10;
	}
	if(d==0) return 1;
	return 0;
}
int so(int n){
	int tong=0;
	while(n>0){
		int b=n%10;
		tong=tong+b;
		n=n/10;
	}
	if(sont(tong)==1) return 1;
	return 0;
}
int main(){
	int n,m,dem3=0;
	scanf("%d%d",&n,&m);
	for (int i=n;i<=m;i++){
		if(so(i)==1&&tong(i)==1&&sont(i)==1) 
		dem3++;
}
	printf("%d",dem3);
return 0;
}


