#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ssh=abs(b-a)+1;
    int tong=((a+b)*ssh)/2;
    printf("%d",tong);
	return 0;
}

