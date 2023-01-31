#include<bits/stdc++.h>
using namespace std;
const int N=4005;
char s[N];
vector<int> v[N];

struct Point
{
	int a,b;
}p[N];
int ans;
void cal(int x)
{
	if (s[x-1]=='B') p[x].a=1, p[x].b=0;
	else p[x].b=1, p[x].a=0; 
	for(int i=0;i<v[x].size();i++)
	{
		cal(v[x][i]);
		p[x].a+=p[v[x][i]].a;
		p[x].b+=p[v[x][i]].b;
	}
	if (p[x].a==p[x].b) ans++;
}

int main()
{
	int t,n,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++) v[i].clear();
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&x);
			v[x].push_back(i);
		}
		scanf("%s",s);
		ans=0;
		cal(1);
		printf("%d\n",ans);
	}
	return 0;
}
