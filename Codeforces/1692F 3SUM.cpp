#include<bits/stdc++.h>
using namespace std;
int a[10];
bool cal()
{
	for(int i=0;i<10;i++)
	{
		if (a[i]==0) continue;
		for(int j=i+1;j<10;j++)
		{
			if (a[j]==0) continue;
			for (int k=j+1;k<10;k++)
			{
				if (a[k]==0) continue;
				if ((i+j+k)%10==3) return true;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		if (a[i]<2) continue;
		for(int j=0;j<10;j++)
		{
			if (i==j) continue;
			if (a[j]==0) continue;
			if ((i+i+j)%10==3) return true;
		}
	}
	for(int i=0;i<10;i++)
	{
		if (a[i]<3) continue;
		if ((i+i+i)%10==3) return true;
	}
	return false;
}
int main()
{
	int t,n,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			a[x%10]++;
		}
		if (cal()) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}
