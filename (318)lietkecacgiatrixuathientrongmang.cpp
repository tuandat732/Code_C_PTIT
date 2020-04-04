#include<stdio.h>
#include<math.h>
void xoa(int a[],int n){
	int b[100];
	for (int i=0;i<n;i++) b[i]=1;
	for (int i=0;i<n;i++){
	if(b[i]){
	b[i]=0;
	for (int j=i+1;j<n;j++){
		if(a[j]==a[i]) b[j]=0;
	}
	printf("%d ",a[i]);
}
}
}
int main(){
	int n,a[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	xoa(a,n);
return 0;
}


