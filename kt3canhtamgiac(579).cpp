#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>0&&b>0&&c>0){
		if(a+c>b&&a+b>c&&b+c>a) printf("1");
		else printf("0");
	}
	else printf("0\n");
return 0;
}


