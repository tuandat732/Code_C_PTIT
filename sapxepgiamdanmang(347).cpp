#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],n,b;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int j=0;j<n;j++){
	for (int i=0;i<n-1;i++){
		if(a[i]<a[i+1]) {
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		}
	}
	}
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
return 0;
}


