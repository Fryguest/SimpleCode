#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N][N];
int cal(int x,int y,int n)
{
	int temp=a[x][y]+a[n+1-x][n+1-y]+a[y][n+1-x]+a[n+1-y][x];
	return min(temp,4-temp);
}
int main()
{
	int t,n,ans;
	char c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++)
			{
				scanf(" %c", &c);
				a[i][j]=(c=='1'?1:0);
			}
		}
				
		ans=0;
		for(int i=1;2*i<=n;i++)
			for(int j=1;2*j<=n;j++)
				ans+=cal(i,j,n);
		if (n%2)
		{
			for(int i=1;2*i<=n;i++)	ans+=cal(i,n/2+1,n);
		}
		cout<<ans<<endl;
	}
	return 0;
}
