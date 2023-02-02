#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
bool v[N];
int a[N];
vector<int>result;
int main()
{
	int t,n,num,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		memset(v,0,sizeof(v));
		num=0;
		result.clear();
		for(int i=1;i<=32;i++)
		{
			x=-1;
			for(int i=1;i<=n;i++)
			{
				if (v[i]) continue;
				if (x==-1) x=i;
				if ((num|a[i])>(num|a[x])) x=i;
			}
			num|=a[x];
			v[x]=1;
			result.push_back(x);
		}
		for (int i=1;i<=n;i++)
		{
			if (!v[i]) result.push_back(i);
		}
		for (int i=0;i<n;i++)
		{
			if (i) printf(" ");
			printf("%d", a[result[i]]);
		}printf("\n");
	}
	
	return 0;
}
