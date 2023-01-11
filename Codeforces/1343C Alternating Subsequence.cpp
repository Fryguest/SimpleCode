#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	long long ans;
	long long a,b;
	while(t--)
	{
		scanf("%d",&n);
		scanf("%lld",&a);
		ans=0;
		for (int i=2;i<=n;i++)
		{
			scanf("%lld",&b);
			if (a*b>0&&b>a) a=b;
			else if (a*b<0)
			{
				ans+=a;
				a=b;
			}
		}
		ans+=a;
		printf("%lld\n",ans);
	}
	return 0;
}
