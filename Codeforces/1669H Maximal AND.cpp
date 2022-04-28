#include <bits/stdc++.h>
using namespace std;
int v[32];
int main()
{
	int t,n,k,x,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		memset(v,0,sizeof(v));
		for (int i=0;i<n;i++)
		{
			cin>>x;
			for (int j=0;j<=30;j++)
			{
				if ((x&(1<<j)) == 0) v[j]++;
			}
		}
		ans=0;
		for (int j=30;j>=0;j--)
		{
			if (k>=v[j])
			{
				k-=v[j];
				ans+=(1<<j);
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
