#include<bits/stdc++.h>
using namespace std;
const int N=205;
int a[N][N];
int n,m;
int cal(int x,int y)
{
	int ans=a[x][y];
	int i,j;
	i=x-1;j=y-1;
	while(i>=1&&j>=1)
	{
		ans+=a[i][j];
		i--; j--;
	}
	
	
	i=x+1;j=y-1;
	while(i<=n&&j>=1)
	{
		ans+=a[i][j];
		i++; j--;
	}
	
	
	i=x-1;j=y+1;
	while(i>=1&&j<=m)
	{
		ans+=a[i][j];
		i--; j++;
	}
	
	
	i=x+1;j=y+1;
	while(i<=n&&j<=m)
	{
		ans+=a[i][j];
		i++; j++;
	}
	return ans;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
		{
			for (int j=1;j<=m;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for (int j=1;j<=m;j++)
			{
				ans=max(ans,cal(i,j));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
