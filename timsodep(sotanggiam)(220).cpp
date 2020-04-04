#include<stdio.h>
#include<math.h>
int kttangdam(int n){
	int a,b,t=0,dem1=0,dem2=0;
	while(n>0){
		a=n%10;
		n=n/10;
		b=n%10;
		if (a<b) dem1++;
		if(a>b) dem2++;
		t++;
	}
	if (dem2==t||dem1==t-1) return 1;
	return 0;
}
int sont(int n){
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int main(){
	int n,dem3=0,a,b;
	scanf("%d",&n);
	a=pow(10,n-1);
	b=pow(10,n);
	for(int i=a;i<b;i++)
	if(kttangdam(i)==1&&sont(i)==1) {
	dem3++;

}
printf("%d",dem3);
return 0;
}


