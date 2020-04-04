#include<stdio.h>
#include<math.h>

void kt(int a[],int n){
	int max=a[0];
	int min=a[0];
	for (int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
		else if(a[i]<min) min=a[i];
	}
	printf("%d %d",max,min);
}
int main(){
	int n,a[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	kt(a,n);
return 0;
}


