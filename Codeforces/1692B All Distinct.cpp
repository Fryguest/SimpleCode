#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			m[x]++;
		}
		int a=0,b=0;
		for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
		{
			if (it->second%2==0) a++;
			else b++;
		}
		int ans=a+b;
		if (a%2==0) cout<<ans<<endl;
		else cout<<ans-1<<endl;
	}
	return 0;
}
