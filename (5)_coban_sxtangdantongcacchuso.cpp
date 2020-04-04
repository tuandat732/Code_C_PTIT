#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
	int tong=0;
	while(n>0){
		int b=n%10;
		tong=tong+b;
		n=n/10;	
	}
	return tong;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(kt(a)==kt(b)) printf("%d %d",a,b);
    else if(kt(a)>kt(b)) printf("%d %d",b,a);
    else printf("%d %d",a,b);
return 0;
}

