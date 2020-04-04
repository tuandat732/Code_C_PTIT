#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++){
    		if(j<=n-i) printf("~");
    		else printf("%d",a);
		}
		a++;
		printf("\n");
	}
return 0;
}

