#include<stdio.h>
#include<math.h>
#include<string.h>
int tich=1;
int giaithua(int n){
	int tich=1,m=n,tong=0;
	while(n>0){
		int b=n%10;
		for (int j=1;j<=b;j++) tich=tich*j;
		tong=tong+tich;
		n=n/10;
		tich=1;
	}
	if(tong==m) return 1;
	return 0;
}
int main(){
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         if(giaithua(i)==1) printf("%d ",i);
 }
     
return 0;
}

