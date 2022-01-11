#include<iostream>
using namespace std;
int main()
{
	int t,n;
	int ans,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n=n/2-1;
		ans=2;
		x=4;
		for (int i=1;i<=n;i++)
		{
			ans+=x;
			x*=2;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
