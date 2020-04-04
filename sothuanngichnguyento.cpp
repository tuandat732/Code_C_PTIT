#include<stdio.h>
#include<math.h>
#include<string.h>
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=n;i<=m;i++){
		int songuoc=0,k=i;
	while(i>0){
		songuoc=songuoc*10+i%10;
		i=i/10;
	}
		if(nto(songuoc)==1&&nto(k)==1) printf("%d ",k);
}
for (int i=n;i<=m;i++){
		int songuoc=0,k=i;
	while(i>0){
		songuoc=songuoc*10+i%10;
		i=i/10;
	}
		if(nto(songuoc)==1&&nto(k)==1) printf("%d ",songuoc);
}

return 0;
}

