#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
	int t,n,minn,maxn;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		minn=maxn=1;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if (a[minn]>a[i]) minn=i;
			if (a[maxn]<a[i]) maxn=i;
		}
		if (maxn<minn) swap(maxn,minn);
		printf("%d\n",min(maxn, min(n-minn+1, minn+n-maxn+1)));
	}
	return 0;
}
