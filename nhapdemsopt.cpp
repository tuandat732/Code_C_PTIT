#include<stdio.h>
#include<math.h>
void sx(int a[],int n){
	for (int j=1;j<=n;j++){
	for (int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			int b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
		}
	}
}}
int sont(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
void demm(int a[],int n){
	int b[1000];
	for (int i=1;i<=n;i++) b[i]=1;
	for (int i=1;i<=n;i++){
		int dem=1;
		if(b[i]!=0&&sont(a[i])==1){
			b[i]=0;
			for (int j=1+i;j<=n;j++){
				if(a[j]==a[i]) {
				dem++;
				b[j]=0;}
			}
			printf("%d %d\n",a[i],dem);	
		}		
	}
}
int main(){
	int a[1000],n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	sx(a,n);
	demm(a,n);	
return 0;
}


