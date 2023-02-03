#include<bits/stdc++.h>
using namespace std;
const int N=1005;
long long a[N][N];
long long s[N][N];
int main()
{
	int t,n,q,x1,x2,y1,y2,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&q);
		memset(a,0,sizeof(a));
		while(n--)
		{
			scanf("%d%d",&x,&y);
			a[x][y]+=x*y;
		}
		for (int i=1;i<=1000;i++)
		{
			for (int j=1;j<=1000;j++)
			{
				s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
			}
		}
		for(int i=1;i<=q;i++)
		{
			scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
			x2--;y2--;
			printf("%lld\n",s[x2][y2]-s[x1][y2]-s[x2][y1]+s[x1][y1]);
		}
		
	}
	return 0;
}
