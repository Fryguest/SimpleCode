#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
long long height[N];
long long ans[N];
vector<int> v[N];
long long build(int x,int f,int d)
{
	height[x]=a[x];
	for (int i=0;i<v[x].size();i++)
	{
		if (v[x][i]==f) continue;
		height[x]+=build(v[x][i],x,d+1);
	}
	ans[1]+=(long long)d*a[x];
	return height[x];
}

void cal(int x,int f)
{
	ans[x]=ans[f] + height[1] - height[x] - height[x];
	for (int i=0;i<v[x].size();i++)
	{
		if (v[x][i]==f) continue;
		cal(v[x][i],x);
	}
	return;
}

int main()
{
	int n;
	long long result=0;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	for (int i=1;i<=n;i++) v[i].clear();
	for (int l, r, i=1;i<n;i++) {
		scanf("%d%d",&l,&r);
		v[l].push_back(r);
		v[r].push_back(l);
	}
	build(1,0,0);
	for (int i=0;i<v[1].size();i++) cal(v[1][i],1);
	for (int i=1;i<=n;i++) result=max(result,ans[i]);
	printf("%lld\n",result);
	return 0;
}
