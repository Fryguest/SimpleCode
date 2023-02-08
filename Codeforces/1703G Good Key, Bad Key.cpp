#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
long long sum[N];
int main()
{
	int t,n,k;
	long long ans,result,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		sum[0]=0;
		for(int i=1;i<=n;i++)sum[i]=a[i]+sum[i-1];
		ans=0;
		for(int num=0;num<=n;num++)
		{
			result=sum[n-num]-(long long)(n-num)*k;
			x=2;
			for (int i=n-num+1;i<=n&&i<=n-num+30;i++)
			{
				result+=a[i]/x;
				x*=2;
			}
			ans=max(result,ans);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
