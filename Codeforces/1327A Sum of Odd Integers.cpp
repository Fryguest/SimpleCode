#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long a,b;
	while(t--)
	{
		cin>>a>>b;
		a-=b*b;
		if (a<0) cout<<"NO\n";
		else if (a%2) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
