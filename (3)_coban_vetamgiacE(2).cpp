#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
  int n;
  scanf("%d",&n);
  for (int i=1;i<=n;i++){
  	for (int j=n+1-i;j<=n*2+1-i*2;j++) printf("%d",j);
  	printf("\n");
  }
return 0;
}

