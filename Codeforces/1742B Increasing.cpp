#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		set<int>s;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			s.insert(x);
		}
		if (s.size()==n) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
