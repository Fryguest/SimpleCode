#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int s[N];
int n;
int lower(int x)
{
	return x&(-x);
}
void add(int x)
{
	while(x<=n)
	{
		s[x]++;
		x+=(x&(-x));
	}
}

int query(int x)
{
	int ans=0;
	while(x)
	{
		ans+=s[x];
		x-=(x&(-x));
	}
	return ans;
}

int main()
{
	int t,x;
	long long ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) s[i]=0;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &x);
			ans+=query(n+1-x);
			add(n+1-x);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
