#include<stdio.h>
#include<math.h>
int main(){
	int a[1000][1000],n,b[1000]={0};
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int k=0;k<n;k++)
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++){
	 	b[k]=a[j][i]+b[i];
	}
	int max=b[0];
	for (int i=1;i<n;i++){
		if(b[i]>max) b[i]=max;
	}
	for (int i=0;i<n;i++) if(b[i]==max) max=i;
	printf("%d\n",max);
	for (int i=0;i<n;i++) printf("%d ",a[i][max]);
return 0;
}


