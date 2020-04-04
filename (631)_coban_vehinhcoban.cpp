#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=1;
	for(int i=n;i>0;i--){
		for (int j=n;j>0;j--){
			if(j<i) printf("%d ",i);
			else printf("%d ",j);
		}
		printf("\n");
}
return 0;
}


