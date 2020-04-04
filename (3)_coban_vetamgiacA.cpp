#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    	for (int j=n-1;j>=0;j--) {
    		if(j>i) printf("~");
    		else printf("%d",j);
		}
    	for(int j=1;j<i+1;j++) printf("%d",j); 
	printf("\n");	
	}
return 0;
}

