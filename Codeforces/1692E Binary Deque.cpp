#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,x,ans;
	vector<int>v;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		v.clear();
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			if (x) v.push_back(i);
		}
		if (v.size()<k) printf("-1\n");
		else if (v.size()==k) printf("0\n");
		else
		{
			ans=min(v[v.size()-k-1], n-v[k]+1);
			for(int i=1;i<=v.size()-k-1;i++)
			{
				ans=min(ans, v[i-1]+n-v[i+k]+1);
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
