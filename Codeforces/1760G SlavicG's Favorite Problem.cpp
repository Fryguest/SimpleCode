#include<bits/stdc++.h>
using namespace std;
struct Edge
{
	int x;
	int v;
	Edge(int _x, int _v)
	{
		x=_x;
		v=_v;
	}
};
const int N=2e5+5;
int n,a,b;
int d1[N], d2[N];
vector<Edge> v[N];
void dfs1(int x,int f,int val)
{
	if (x==b&&val!=0) return;
	d1[x]=val;
	for (int i=0;i<v[x].size();i++)
	{
		if (v[x][i].x==f) continue;
		dfs1(v[x][i].x,x,val^v[x][i].v);
	}
}

void dfs2(int x,int f,int val)
{
	d2[x]=val;
	for (int i=0;i<v[x].size();i++)
	{
		if (v[x][i].x==f) continue;
		dfs2(v[x][i].x,x,val^v[x][i].v);
	}
}

bool cal()
{
	set<int>s;
	for(int i=1;i<=n;i++)
	{
		if (d1[i]>=0) s.insert(d1[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if (d2[i]>=0&&s.find(d2[i])!=s.end()) return true;
	}
	return false;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(d1,-1,sizeof(d1));
		memset(d2,-1,sizeof(d2));
		scanf("%d%d%d",&n,&a,&b);
		for(int i=1;i<=n;i++) v[i].clear();
		for(int l,r,x,i=1;i<n;i++)
		{
			scanf("%d%d%d",&l,&r,&x);
			v[l].emplace_back(Edge(r,x));
			v[r].emplace_back(Edge(l,x));
		}
		dfs1(a,-1,0);
		dfs2(b,-1,0);
		d2[b]=-1;
		if (d1[b]==0) printf("YES\n");
		else if (cal()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
