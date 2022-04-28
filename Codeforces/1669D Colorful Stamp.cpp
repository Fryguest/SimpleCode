#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string s;
	bool a,b,c,f;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		s+='W'; n++;
		f=true;
		a=b=c=false;
		for (int i=0;i<n;i++)
		{
			if (s[i]=='W')
			{
				if (c&&(!a||!b)) f=false;
				c=a=b=false;
			}
			else if (s[i]=='R') a=c=true;
			else if (s[i]=='B') b=c=true;
		}
		if (f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
