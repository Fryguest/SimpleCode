#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n,m;
		cin>>x>>n>>m;
		while(x>=20&&n>0)
		{
			x=x/2+10;
			n--;
		}
		if (x>m*10) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
