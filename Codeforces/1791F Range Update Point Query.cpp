#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
set<int>s;

int cal(int x)
{
	int ans=0;
	while(x)
	{
		ans+=x%10;
		x/=10;
	}
	return ans;
}
void update(int l,int r)
{
	int d=l;
	while(!s.empty())
	{
		auto it=s.lower_bound(d);
		if (it==s.end()||*it>r) return;
		int i=*it;
		s.erase(it);
		a[i]=cal(a[i]);
		if (a[i]>=10) s.insert(i); 
		d=i+1;
	}
}
int main()
{
	int t,n,x,l,r,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]>=10) s.insert(i);
		}
		for(int i=1;i<=q;i++)
		{
			scanf("%d",&x);
			if (x==1)
			{
				scanf("%d%d",&l,&r);
				update(l,r);
			}
			else
			{
				scanf("%d",&l);
				printf("%d\n",a[l]);
			}
		}
	}
	return 0;
}
