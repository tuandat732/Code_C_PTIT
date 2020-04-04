#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
      int a[100],n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)  scanf("%d",&a[i]);
      int max=a[0];
      int max2=0;
      for (int i=1;i<n;i++)
      if(a[i]>max) max=a[i];
      for (int i=1;i<n;i++) if(a[i]<max) if(a[i]>max2) max2=a[i];
      printf("%d %d",max,max2);
return 0;
}

