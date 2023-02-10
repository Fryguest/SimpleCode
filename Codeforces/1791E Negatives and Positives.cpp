#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
	int t,n,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]<=0) count++;
		}
		long long ans;
		if (count%2)
		{
			sort(a,a+n,[](int a,int b){return abs(a)<abs(b);});
			ans=-abs(a[0]);
			for(int i=1;i<n;i++)
			{
				ans+=abs(a[i]);
			}
		}
		else
		{
			ans=0;
			for(int i=0;i<n;i++) ans+=abs(a[i]);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
