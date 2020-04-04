#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n,a=1;
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
    	for (int j=1;j<=n;j++) if(j<=i) printf("%d",j);
		
    	printf("\n");
	}
return 0;
}

