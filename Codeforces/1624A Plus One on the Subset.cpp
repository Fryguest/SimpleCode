#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,minn,maxn;
	cin>>t;
	while (t--)
	{
		cin>>n;
		maxn=-1;
		minn=1e9+1;
		while (n--)
		{
			cin>>x;
			minn=min(minn,x);
			maxn=max(maxn,x);
		}
		cout<<maxn-minn<<endl;
	}
	return 0;
}
