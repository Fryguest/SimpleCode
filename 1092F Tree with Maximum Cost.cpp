#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
const int M=1e9+5;
struct Point
{
	int v;
	int index;
	Point(){};
	Point(int _v, int _index) {v=_v, index=_index;}
	friend bool operator<(Point a, Point b)
	{
		return a.index < b.index;
	}
}v[N];
bool comp(Point a, Point b)
{
	if (a.v != b.v) return a.v>b.v;
	return a.index < b.index;
}
set<Point>s;
int n;
bool cal()
{
	int l,r,num=0;
	set<Point>::iterator it;
	if (n%2) num++;
	for (int i=1;i<=n;i++)
	{
		if (i!=1&&v[i].v!=v[i-1].v&&num!=0) 
		{
//			cout<<i<<endl;
//			cout<<num<<endl;
//			cout<<v[i].v<<endl;
			return false;
		}
		it=s.lower_bound(v[i]);
		r=it->index;
		it--;
		l=it->index;
		if ((r-l-1)%2) num--;
		if ((r-v[i].index-1)%2) num++;
		if ((v[i].index-l-1)%2) num++;
		s.insert(v[i]);
	}
	if (num) return false;
	return true;
}
int main()
{
	scanf("%d",&n);
	s.clear();
	for (int x,i=1;i<=n;i++)
	{
		scanf("%d",&v[i].v);
		v[i].index=i;
	}
	sort(v+1,v+n+1,comp);
	s.insert(Point(M,0));
	s.insert(Point(M,n+1));
	if (cal()) printf("YES\n");
	else printf("NO\n");
	return 0;
}
