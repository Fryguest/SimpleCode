#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	bool v[26];
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		memset(v,0,sizeof(v));
		for (int i=0;i<s.length();i++)
		{
			if (v[s[i]-'A']==0)
			{
				n++;
				v[s[i]-'A']=1;
			}
		}
		cout<<n<<endl;
	}
	return 0;
}
