#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long x,y,a,b;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>a>>b;
		if (b>2*a) cout<<(x+y)*a<<endl;
		else
		{
			long long minn=min(x,y);
			cout<<minn*b+a*(x+y-minn-minn)<<endl;
		}
	}
	return 0;
}
