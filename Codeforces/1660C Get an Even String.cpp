#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,len;
	string s;
	bool v[26];
	cin>>t;
	while(t--)
	{
		cin>>s;
		len=0;
		memset(v,0,sizeof(v));
		for(int i=0;i<s.length();i++)
		{
			if (v[s[i]-'a'])
			{
				len+=2;
				memset(v,0,sizeof(v));
			}
			else
			{
				v[s[i]-'a']=1;
			}
		}
		cout<<s.length()-len<<endl;
	}
}
