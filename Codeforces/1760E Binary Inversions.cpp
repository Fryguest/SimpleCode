#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int s[N];
int main()
{
	int t,n,a,b,c,d,maxn;
	long long ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=0;
		a=b=c=d=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&s[i]);
			if (s[i]) a++;
			else 
			{
				ans+=a;
				b++;
			}
		}
		maxn=0;
		for(int i=1;i<=n;i++)
		{
			if (s[i]) maxn=max(maxn,c-b+d);
			else maxn=max(maxn,b-d-c-1);
			
			if (s[i]) c++;
			else d++;
		}
		printf("%lld\n", ans+maxn);
	}
	return 0;
}
