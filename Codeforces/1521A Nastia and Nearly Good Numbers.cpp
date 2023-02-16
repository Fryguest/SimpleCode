#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if (b==1) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<1LL*a*b<<" "<<1LL*a*(b+1)<<endl;
		}
	}
	return 0;
}
