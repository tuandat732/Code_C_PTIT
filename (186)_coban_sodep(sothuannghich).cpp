#include<stdio.h>
#include<math.h>
int thuannghich(int a){
	int b=a,songuoc=0,dem=0,tong=0;
	while(a>0){
		int c=a%10;
		if(c==6) dem++;
		tong=tong+c;
		songuoc=songuoc*10+c;
		a=a/10;
	}
	if(songuoc==b&&dem>=1&&tong%10==8) return 1;
	return 0;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
    for (int i=n;i<=m;i++) if(thuannghich(i)==1) printf("%d ",i);
   
return 0;
}


