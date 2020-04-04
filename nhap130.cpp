#include <stdio.h>
void nhap(int &n);
int SHH( int x);
void xuat(int n);
int main()
{
	int n,x;
	nhap(n);
	SHH(x);
	xuat(n);
}
void nhap( int &n)
{
	printf("nhap so n ");
	scanf("%d",&n);
}
int SHH(int x)
{
	int tong=1;
	for(int i=x/2;i>1;i--)
	{
		if(x%i==0)
			tong+=i;
	}
	if(tong==x)
		return 1;
	else 
		return 0;
}
void xuat(int n)
{
	printf(" cac so hoan hao trc %d la",n);
	for(int j=6;j<=n;j++)
	{
		if(SHH(j)==1)
			printf(" %d ",j);
	}
}

