#include<stdio.h>
#include<math.h>
int main(){
	int a[1000],n,b[1000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<n;j++){
			if(a[i]==a[j]) 
			for (int k=j+1;k<n;k++) {
			a[k]=a[k+1];
			n--;}
			
		}
	}
	for (int i=1;i<=n;i++) printf("%d ",a[i]);
return 0;
}


