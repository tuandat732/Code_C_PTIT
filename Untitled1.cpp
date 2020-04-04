#include<iostream>
using namespace std;
int main()
{
	int a[10000]={0},n;
	cin>>n;
	for (int i=2;i<=n/2;i++){
		if(a[i]==0){
			cout<<i<<" ";
			for (int j=i*2;j<n;j+=i) a[j]=1;
		}
	}
	
 return 0;
}

