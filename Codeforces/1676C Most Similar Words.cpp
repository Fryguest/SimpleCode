#include<bits/stdc++.h>
using namespace std;
const int N=55;
string s[N];
int cal(string a,string b)
{
	int x=0;
	for (int i=0;i<a.length();i++)
	{
		x+=abs(a[i]-b[i]);
	}
	return x;
}
int main()
{
	int t,n,m,ans;
	scanf("%d",&t);
	while(t--)
	{
		cin>>n>>m;
		ans=1e9;
		for (int i=1;i<=n;i++) cin>>s[i];
		for (int i=1;i<=n;i++)
		{
			for (int j=i+1;j<=n;j++)
			{
				ans=min(ans,cal(s[i],s[j]));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
