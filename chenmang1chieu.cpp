#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
int a[100],b[100],n,m,p;
scanf("%d%d%d",&n,&m,&p);
for (int i=0;i<n;i++) scanf("%d",&a[i]);
for (int i=0;i<m;i++) scanf("%d",&b[i]);
for (int i=p+m;i>=p;i--){
	a[i+m]=a[i];
}
for (int i=p;i<p+m;i++){
a[i]=b[i-p];

}
for (int i=0;i<n+m;i++) printf("%d ",a[i]);
return 0;
}

