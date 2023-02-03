#include<bits/stdc++.h>
using namespace std;
const int N=1005;
string s[3][N];
int ans[3];
map<string,int>m;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m.clear();
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>s[i][j];
				m[s[i][j]]++;
			}
		}
		memset(ans,0,sizeof(ans));
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<n;j++)
			{
				if (m[s[i][j]]==1) ans[i]+=3;
				else if (m[s[i][j]]==2) ans[i]+=1;
			}
		}
		cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
	}
	return 0;
}
