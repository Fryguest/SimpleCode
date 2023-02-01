#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],s[N];
map<int,int>m;
int main()
{
	int t;
	int n,ans,l,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		m.clear();
		for(int i=1;i<=n;i++)
		{
			s[i]=2*m[a[i]]-i;
			m[a[i]]++;
		}
		m.clear();
		ans=1;
		l=r=1;
		for(int i=1;i<=n;i++)
		{
			if(m.find(a[i])!=m.end())
			{
				if (s[i]-s[m[a[i]]]+1>ans)
				{
					ans=s[i]-s[m[a[i]]]+1;
					l=m[a[i]];
					r=i;
				}
				if (s[i]<s[m[a[i]]])
				{
					m[a[i]]=i;
				}
			}
			else
			{
				m[a[i]]=i;
			}
		}
		printf("%d %d %d\n", a[l],l,r);
	}
	return 0;
}
