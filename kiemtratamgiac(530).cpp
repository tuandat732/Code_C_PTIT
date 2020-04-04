#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c) printf("3");
	else if(a==b||b==c||c==a) printf("2");
	else printf("1");
return 0;
}


