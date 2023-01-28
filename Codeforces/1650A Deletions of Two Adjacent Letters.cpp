#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		char c;
		cin>>s>>c;
		bool f=false;
		for(int i=0;i<s.length();i++)
		{
			if (s[i]==c&&i%2==0)
			{
				f=true;
				break;
			}
		}
		if (f) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
}
