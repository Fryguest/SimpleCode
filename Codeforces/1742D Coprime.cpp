#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int v[N];
int gcd(const int a, const int b)
{
	if (a%b==0) return b;
	return gcd(b, a%b); 
}
int main()
{
	int t,n,x,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(v,0,sizeof(v));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			v[x]=i;
		}
		ans=-1;
		for(int i=1;i<=1000;i++)
		{
			if (!v[i]) continue;
			for(int j=i;j<=1000;j++)
			{
				if (!v[j]) continue;
				if (gcd(i,j)==1) ans=max(ans,v[i]+v[j]);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
