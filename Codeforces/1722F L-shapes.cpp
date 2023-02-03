#include<bits/stdc++.h>
using namespace std;
const int N=55;
int a[N][N];
bool checkSingle(int x,int y)
{
	if (a[x  ][y]!='*' &&a[x  ][y+1]=='*'
	  &&a[x+1][y]=='*' &&a[x+1][y+1]=='*') return true;
	  
	if (a[x  ][y]=='*' &&a[x  ][y+1]!='*'
	  &&a[x+1][y]=='*' &&a[x+1][y+1]=='*') return true;
	  
	if (a[x  ][y]=='*' &&a[x  ][y+1]=='*'
	  &&a[x+1][y]!='*' &&a[x+1][y+1]=='*') return true;
	  
	if (a[x  ][y]=='*' &&a[x  ][y+1]=='*'
	  &&a[x+1][y]=='*' &&a[x+1][y+1]!='*') return true;

	return false;
}

bool check1(int x,int y)
{
	for (int i=x-1;i<=x;i++)
	{
		for (int j=y-1;j<=y;j++)
		{
			if (checkSingle(i,j))
			{
				return true;
			}
		}
	}
	return false;
}
bool check2(int x,int y)
{
	int count=0;
	for (int i=x-1;i<=x+1;i++)
	{
		for (int j=y-1;j<=y+1;j++)
		{
			count+=(a[i][j]=='*'); 
		}
	}
	return count==3;
}
int main()
{
	int t,n,m;
	bool f;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf(" %c", &a[i][j]);
			}
		}
		f=true;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if (a[i][j]=='*')
				{
					if (!check1(i,j)||!check2(i,j))
					{
						f=false;
						break;
					}
				}
			}
			if (!f) break;
		}
		if (f) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
