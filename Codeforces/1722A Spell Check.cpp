#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	bool a,b,c,d,e;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		if (n!=5) cout<<"NO\n";
		else
		{
			a=b=c=d=e=false;
			for (int i=0;i<5;i++)
			{
				if (s[i]=='T') a=true;
				else if (s[i]=='i') b=true;
				else if (s[i]=='m') c=true;
				else if (s[i]=='u') d=true;
				else if (s[i]=='r') e=true;
			}
			if (a&&b&&c&&d&&e) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}
