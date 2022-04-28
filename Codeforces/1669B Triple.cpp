#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int>m;
int main()
{
	int t,n,x;
	bool f;
	cin>>t;
	while(t--)
	{
		m.clear();
		cin>>n;
		while(n--)
		{
			cin>>x;
			m[x]++;
		}
		f=false;
		for (auto o: m)
		{
			if (o.second>=3)
			{
				f=true;
				cout<<o.first<<endl;
				break;
			}
		}
		if (!f) cout<<"-1"<<endl;
	}
	return 0;
}
