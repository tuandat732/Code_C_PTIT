#include<stdio.h>
#include<math.h>
int main(){
	int n,tich=1,tong=0;
	scanf("%d",&n);
	int c=n;
	while(n>0){
		int b=n%10;
		for(int i=1;i<=b;i++) tich=tich*i;
		tong=tong+tich;
		tich=1;
		n=n/10;
	}
	if(tong==c) printf("1");
	else printf("0");
return 0;
}


