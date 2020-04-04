#include<stdio.h>
#include<math.h>
#include<string.h>
int ktthuannghich(int n){
	int b=n,songuoc=0;
	while(n>0){
		songuoc=songuoc*10+n%10;
		n=n/10;
	}
	if(songuoc==b) return 1;
	return 0;
}
int kt2(int n){
	int t=0;
	while(n>0){
		int c=n%10;
		n=n/10;
		if(c==9) return 0;
	}
	return 1;
}
int main(){
      int n,dem=0;
      scanf("%d",&n);
      for (int i=2;i<n;i++){
      	if(kt2(i)==1&&ktthuannghich(i)==1){
		  printf("%d ",i);
		  dem++;}
	  }
	  printf("\n%d",dem);
return 0;
}

