#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	char m='A';
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=-1;j<=n+2;j=j+2)
			if(j<=i*2-2) printf("%c",int(m+j));
		for (int j=n;j>=-1;j=j-2)
			if(j>i*2) printf("%c",int(m+j));
		printf("\n");
	}
return 0;
}

