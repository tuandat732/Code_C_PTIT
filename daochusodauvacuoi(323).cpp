 #include<stdio.h>
#include<math.h>
int main(){
	int a,b,nguoc=0,dem=0,n=1;
	scanf("%d",&a);
	int c=a;
	while(a>0){
		if(a==c||a<10) {
			b=a%10;
			nguoc=nguoc*10+b;
			a=a/10;
		}
		else {
			nguoc=nguoc*10;
			a=a/10;
		}
		n=n*10;
	}
	int m=nguoc+((c%(n/10))/10*10);
	printf("%d",m);
return 0;
}

