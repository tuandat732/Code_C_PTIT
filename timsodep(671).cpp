#include<stdio.h>
#include<math.h>
int kt(int a){
	int b,c=1;
	while(a>0){
		b=a%10;
		if(b!=0&&b!=6&&b!=8) {
			c=0;
			//break;
			}
		a=a/10;
	}
     if(c==0) return 0;
     return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	if(kt(a)==1) printf("1");
	else printf("0");
return 0;
}


