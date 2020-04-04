#include<stdio.h>
#include<math.h>
int kt(int a){
	if(a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
void xoa(int a[],int n){
	int c[100],dem=0;
	for (int i=0;i<n;i++) c[i]=1;
	for (int i=0;i<n;i++){
	if(c[i]==1){
	for (int j=i+1;j<n;j++){
		if(a[j]==a[i]) c[j]=0;
	}
}
}
for (int i=0;i<n;i++) if(c[i]==1&&kt(a[i])==1) dem++;
printf("%d",dem);
}

int main(){
	int a[100][100],n,dem=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
	 int b[100];
    for (int k=0;k<n;k++){
     b[k]=a[k][k];
	}
	for (int k=0;k<n;k++) {
	 b[k+n]=a[n-1-k][k];}
	 int m=n*n;
	 xoa(b,m);

    
return 0;
}


