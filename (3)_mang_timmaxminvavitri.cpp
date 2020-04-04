#include<stdio.h>
#include<math.h>
int max(int a[],int n){
	int max=a[0];
	int b;
	for (int i=0;i<n;i++){
		if(a[i]>=max) {
		max=a[i];
		b=i;}
	}
	printf("%d %d",max,b+1);
}
int min(int a[],int n){
	int min=a[0];
	int b;
	for (int i=0;i<n;i++){
		if(a[i]<=min) {
		min=a[i];
		b=i;}
	}
	printf("%d %d",min,b+1);
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	max(a,n);
	printf("\n");
	min(a,n);
return 0;
}


