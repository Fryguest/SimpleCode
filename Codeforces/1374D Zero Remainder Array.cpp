#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
map<int,int>m;
int main()
{
	int t,n,k,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		m.clear();
		for (int i=0;i<n;i++)
		{
			scanf("%d",&x);
			x=(x+k-1)/k*k-x;
			if (x) m[x]++;
		}
		int maxn=0, num=-1;
		for (auto o : m)
		{
			if (o.second>=maxn)
			{
				maxn=o.second;
				num=o.first;
			}
		}
		if (maxn) cout<<(long long)(maxn-1)*k+num+1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
