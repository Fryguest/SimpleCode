#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,x,a1,a2,maxn;
		cin>>n>>d;
		a1=a2=1e9;
		maxn=0;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if (x<a1) {a2=a1;a1=x;}
			else if (x<a2) a2=x;
			maxn=max(maxn,x);
		}
		if (a1+a2<=d||maxn<=d) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
