#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
      int n,a[1000];
      int min=1;
      scanf("%d",&n);
      for (int i=0;i<n;i++) scanf("%d",&a[i]);
      for (int i=1;i<n;i++)
      for (int j=i+1;j<n;j++)
      if(abs(a[j]-a[i])<min) min=a[j]-a[i];
      printf("%d ",min);
      for (int i=1;i<n;i++)
      for (int j=i+1;j<n;j++){
      if (abs(a[j]-a[i])==min) if(a[i]>)
      break;}
return 0;
}

