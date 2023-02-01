#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],s[N];
int main()
{
	int t,n,k,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		s[1]=1;
		ans=0;
		for(int i=2;i<=n;i++)
		{
			if (a[i-1]>=a[i]*2) s[i]=1;
			else s[i]=s[i-1]+1;
			if (s[i]>=k+1) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
