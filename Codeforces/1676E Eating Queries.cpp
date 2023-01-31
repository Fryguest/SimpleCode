#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
struct Point
{
	int x;
	int v;
	int ans; 
}b[N];
int main()
{
	int t,n,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		for(int i=1;i<=q;i++) { scanf("%d",&b[i].v); b[i].x=i;}
		sort(a+1,a+n+1,[](int a, int b){return a>b;});
		sort(b+1,b+q+1,[](Point a, Point b){return a.v<b.v;});
		int sum=0, x=1;
		for (int i=1;i<=q;i++)
		{
			while(sum<b[i].v && x<=n) sum+=a[x++];
			if (sum<b[i].v) b[i].ans=-1;
			else b[i].ans=x-1;
		}
		sort(b+1,b+q+1,[](Point a, Point b){return a.x<b.x;});
		for(int i=1;i<=q;i++)
		{
			printf("%d\n",b[i].ans);
		}
		
	}
	return 0;
}
