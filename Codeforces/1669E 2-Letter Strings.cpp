#include<bits/stdc++.h>
using namespace std;
int a[256];
int b[256];
int c[256][256];
int main()
{
	int t,n;
	string s;
	long long ans;
	cin>>t;
	while (t--)
	{
		cin>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		ans=0;
		for (int i=0;i<n;i++)
		{
			cin>>s;
			ans+=a[s[0]]+b[s[1]]-c[s[0]][s[1]]*2;
			a[s[0]]++;
			b[s[1]]++;
			c[s[0]][s[1]]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
