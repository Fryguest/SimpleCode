#include<bits/stdc++.h>
using namespace std;
int solve(string& s)
{
	int ans=0;
	bool f=false;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if (s[i]=='0'&& f)  count++;
		if (s[i]=='1')
		{
			f=true;
			ans+=count;
			count=0;
		}
	}
	return ans;
}
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}
