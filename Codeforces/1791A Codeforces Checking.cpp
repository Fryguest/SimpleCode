#include<bits/stdc++.h>
using namespace std;
const string s="codeforces";
bool check(char c)
{
	for(int i=0;i<s.length();i++)
	{
		if (s[i]==c) return true;
	}
	return false;
}
int main()
{
	int t;
	char c;
	cin>>t;
	while(t--)
	{
		cin>>c;
		if (check(c)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
