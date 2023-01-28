#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		long long ans;
		map<int,int>m;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			m[x-i]++;
		}
		ans=0;
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
		{
			ans+=(long long)it->second*(it->second-1)/2;
		}
		cout<<ans<<endl;
	}
	return 0;
}
