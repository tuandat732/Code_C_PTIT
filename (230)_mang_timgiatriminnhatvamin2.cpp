#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
     int a[100],n;
     scanf("%d",&n);
     for (int i=0;i<n;i++) scanf("%d",&a[i]);
     int min=a[0];
     int min1=a[1];
     for (int i=0;i<n;i++)
     if(a[i]<min) min=a[i];
     for (int i=0;i<n;i++)
     if(a[i]<min1&&a[i]!=min) min1=a[i];
     printf("%d %d",min,min1);
     
return 0;
}

