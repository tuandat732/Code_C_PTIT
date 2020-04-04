#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,n,m;
    scanf("%d%d%d",&a,&b,&c);
    m=(a+b+abs(a-b))/2;
    n=(m+c+abs(m-c))/2;
    printf("%d",n);
	return 0;
}

