#include<stdio.h>
#include<math.h>
int songuoc(int a){
	int b,nghich=0,c,tong=0;
	c=a;
	while(a>0){
		b=a%10;
		nghich=nghich*10+b;
		tong=tong+b;
		a=a/10;	}
		if(tong%10==0&&nghich==c) return 1;
		return 0;
}
int main(){
    int n,x,y,dem=0;
    scanf("%d",&n);
    x=pow(10,n-1);
    y=pow(10,n);
    for (int i=x;i<y;i++){
    	if(songuoc(i)==1) dem++;
	}
	printf("%d",dem);
return 0;
}


