#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
long long ans;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		ans=0;
		for(int i=2;i<=n;i++)
		{
			ans=max(ans, a[i]*a[i-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
