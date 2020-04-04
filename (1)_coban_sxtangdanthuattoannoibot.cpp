#include<stdio.h>
#include<math.h>
#include<string.h>
int sx(int a[],int n){
	int dem=0;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j+1]<a[j]) {
				int b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
		for (int i=0;i<n;i++) if(a[i]<=a[i+1]) dem++;
		for(int i=0;i<n;i++) printf("%d ",a[i]);
			printf("\n");
		if(dem==n) break;
		dem=0;	
	}
}
int main(){
    int a[1000],n;
    scanf("%d",&n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    sx(a,n);
return 0;
}

