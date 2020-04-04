#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int a[100][100];
	int d=1,n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		if(j>=i) a[j][i]=d++;
		int k=a[i][i]+1;
		for(int j=i+1;j<n;j++){
			a[i][j]=k++;
		}
	}
}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	
return 0;
}

