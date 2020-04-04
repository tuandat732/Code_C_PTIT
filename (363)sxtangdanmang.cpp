#include<stdio.h>
#include<math.h>
void sx9(int a[],int n){
	for (int j=0;j<n;j++)
	for (int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			int b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		}
	}
	for (int i=0;i<n;i++) printf("%d ",a[i]);
 }
int main(){
	int n,a[1000];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	sx9(a,n);
return 0;
}


