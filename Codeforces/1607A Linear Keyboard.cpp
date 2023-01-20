#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		int v[256];
		cin>>s1>>s2;
		for(int i=0;i<26;i++)v[s1[i]]=i;
		int ans=0;
		for(int i=1;i<s2.length();i++)ans+=abs(v[s2[i]]-v[s2[i-1]]);
		cout<<ans<<endl;
	}
	return 0;
}
