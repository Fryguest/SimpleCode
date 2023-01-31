#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
vector<int>v;
int main()
{
	int t,n,k,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		m.clear();
		while(n--)
		{
			scanf("%d",&x);
			m[x]++;
		}
		v.clear();
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
		{
			if (it->second>=k) v.push_back(it->first);
		}
		if (v.empty()) printf("-1\n");
		else
		{
			int l,r,ansl,ansr;
			l=r=ansl=ansr=v[0];
			for (int i=1;i<v.size();i++)
			{
				if (v[i]-v[i-1]==1) r=v[i];
				else l=r=v[i];
				if(r-l>ansr-ansl)
				{
					ansr=r;
					ansl=l;
				}
			}
			printf("%d %d\n",ansl,ansr);
		}
		
	}
	return 0;
}
