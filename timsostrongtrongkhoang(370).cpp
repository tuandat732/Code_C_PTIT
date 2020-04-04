#include<stdio.h>
#include<math.h>
int main(){
	int n,m,tong=0;
	scanf("%d%d",&n,&m);
	for (int j=n;j<=m;j++){
		while(j>0){
	int b=j%10;
		int tich=1;
	for (int i=1;i<=b;i++){
		tich=tich*i;
	}
	tong=tong+tich;
	j=j/10;
    }
    printf("%d ",tong);
    tong=0;
}
return 0;
}


