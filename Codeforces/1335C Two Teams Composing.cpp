#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		map<int,int>m;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			m[x]++;
		}
		int ans=0;
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++) ans=max(ans, max(min(it->second-1,(int)m.size()), min(it->second,(int)m.size()-1)));
		cout<<ans<<endl;
	}
	return 0;
}
