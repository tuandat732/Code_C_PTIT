#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n%i==0) {
		printf("%d",i);
		n=n/i;
		break;}
	}
	for (int i=2;i<=n;i++) {
	while(n%i==0) {
		printf("*%d",i);
		n=n/i;
	}
	}
return 0;
}


