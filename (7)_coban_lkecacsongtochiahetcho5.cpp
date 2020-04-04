#include<stdio.h>
#include<math.h>
#include<string.h>
int ngto(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int kt2(int n){
	int tong=0;
	while(n>0){
		int b=n%10;
		tong=tong+b;
		n=n/10;
	}
	if(tong%5==0) return 1;
	return 0;
}
int main(){
    int n,dem=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) if(ngto(i)==1&&kt2(i)==1) {
    	printf("%d ",i);
    	dem++;
	}
	printf("\n%d",dem);
return 0;
}

