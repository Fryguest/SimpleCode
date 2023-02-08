#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string s[N];
set<string>se;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		se.clear();
		for (int i=1;i<=n;i++)
		{
			cin>>s[i];
			se.insert(s[i]);
		}
		for (int i=1;i<=n;i++)
		{
			bool f=false;
			for(int j=1;j<s[i].length();j++)
			{
				if (se.find(s[i].substr(0,j))!=se.end() && se.find(s[i].substr(j,s[i].length()-j))!=se.end())
				{
					f=true;
					break;
				}
			}
			if (f) cout<<1;
			else cout<<0;
		}cout<<endl;
	}
	return 0;
}
