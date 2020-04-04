#include<stdio.h>
#include<math.h>
int kt(int a){
	int k=a,m=0;
	while(a>0){
		int b=a%10;
		m=m*10+b;
		a=a/10;
	}
	if(m==k) return 1;
	return 0;
}
int main(){
	int a;
	scanf("%d",&a);
	if(kt(a)==1) printf("1");
	else printf("0");
return 0;
}


