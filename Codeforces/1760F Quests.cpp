#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,d;
long long c;
int a[N];
long long sum[N];
long long earn(int x)
{
	return d/x*sum[x]+sum[d%x];
}
int cal()
{
	for (int i=d;i>=1;i--)
	{
		if (earn(i)>=c) return i-1;
	}
	return -1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		scanf("%d%lld%d",&n,&c,&d);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		sort(a+1,a+n+1,[](const int a,const int b){return a>b;});
		sum[0]=0;
		for (int i=1;i<=d;i++) sum[i]=sum[i-1]+a[i];
		if (sum[1]*d<c) printf("Impossible\n");
		else if (sum[min(d,n)]>=c) printf("Infinity\n");
		else printf("%d\n", cal());
	}
	return 0;
}
