#include<stdio.h>
#include<math.h>
int b[1000],a[1000];
int min=b[1];
int sosanh(int b[],int n){
	int min=b[1],h;
	for (int i=2;i<=n;i++){
		if(b[i]<min) min=b[i];
	}
	return min;
}
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<n;i++){
		b[i]=abs(a[i+1]-a[i]);
	}
	sosanh(b,n);
	for (int i=1;i<=n;i++){
		if(b[i]==min) printf("%d %d",a[i],a[i+1]);
	}
return 0;
}


