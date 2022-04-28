#include<bits/stdc++.h>
using namespace std;
const int N=55;
char v[N][N];
int main()
{
	int t,n,m;
	cin>>t;
	while (t--)
	{
		cin>>n>>m;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cin>>v[i][j];
			}
		}
		for (int cnt=0;cnt<n;cnt++)
		{
			for (int i=n-1;i>0;i--)
			{
				for (int j=0;j<m;j++)
				{
					if (v[i][j]=='.'&&v[i-1][j]=='*')
					{
						v[i][j]='*';
						v[i-1][j]='.';
					}
				}
			}
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cout<<v[i][j];
			}
			cout<<endl;
		}
		
		
	}
	return 0;
}
