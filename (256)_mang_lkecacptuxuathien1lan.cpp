#include<stdio.h>
#include<math.h>
void dem1(int a[],int n){
	int b[100],dem2=0;
	for (int i=0;i<n;i++)	b[i]=1; 
	for (int i=0;i<n;i++){
	if (b[i]){
		int dem=1;
		for (int j=i+1;j<n;j++){
			if(a[j]==a[i]) {
				b[j]=0;
				dem++;
			}
		}
		if(dem>1) b[i]=0;
	}
}
    for (int i=0;i<n;i++){
	 if(b[i]==1) printf("%d ",a[i]);
    else if(b[i]==0) dem2=dem2+1;}
 if(dem2==n) printf("0");
}
int main(){
	int a[100],n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)  scanf("%d",&a[i]);
    dem1(a,n);
return 0;
}


