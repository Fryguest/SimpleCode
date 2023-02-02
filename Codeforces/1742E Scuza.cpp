#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct Point
{
	int x;
	long long sum;
}a[N];
struct Query
{
	int x;
	int d;
	long long ans;
}b[N];
int main()
{
	int t,n,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		a[0].x=a[0].sum=0;
		for(int i=1;i<=n;i++) scanf("%d",&a[i].x);
		for(int i=1;i<=n;i++) a[i].sum=a[i-1].sum+a[i].x;
		
		for(int i=1;i<=q;i++) scanf("%d",&b[i].x);
		for(int i=1;i<=q;i++) b[i].d=i;
		sort(b+1,b+q+1, [](Query a, Query b){return a.x<b.x;});
		
		int step=1;
		for(int i=1;i<=q;i++)
		{
			while(step<=n&&a[step].x<=b[i].x) step++;
			b[i].ans=a[step-1].sum;
		}
		sort(b+1,b+q+1, [](Query a, Query b){return a.d<b.d;});
		
		for(int i=1;i<=q;i++)
		{
			if (i!=1) printf(" ");
			printf("%lld", b[i].ans);
		}printf("\n");
		
	}
	return 0;
}
