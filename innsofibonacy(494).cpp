#include<stdio.h>
#include<math.h>
int main(){
	int a=0,b=1,n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if(i==1) printf("0 ");
		else if(i==2) printf("1 ");
		else {
			int c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
	}
return 0;
}


