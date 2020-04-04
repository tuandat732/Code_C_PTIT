#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for (int i=0;i<s.length();i++)
	{
		if (s[i]>=97 && s[i]<=123) cout << (char)(s[i]-32);
		else if(s[i]>=65&&s[i]<=90) cout<<(char)(s[i]+32);
		else cout << s[i];
	}
	return 0;
}
