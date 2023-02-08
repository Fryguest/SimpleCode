#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],s[N];
int main()
{
	int t,n;
	long long ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)scanf("%d",&a[i]);
		s[0]=0;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			if (a[i]<i)
			{
				if (a[i]) ans+=s[a[i]-1];
				s[i]=s[i-1]+1;
			}
			else s[i]=s[i-1];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
