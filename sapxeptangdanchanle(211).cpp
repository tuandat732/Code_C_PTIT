#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<n;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}
	for (int i=1;i<=n;i++) if(a[i]%2==0) printf("%d ",a[i]);
	for (int i=1;i<=n;i++) if(a[i]%2!=0) printf("%d ",a[i]);
return 0;
}


