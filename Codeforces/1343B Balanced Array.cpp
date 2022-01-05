#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if (n/2%2) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for (int i=1;2*i<=n;i+=2)
			{
				if (i!=1)cout<<" ";
				cout<<10000000-i*2<<" "<<10000000+i*2;
			}
			for (int i=1;2*i<=n;i+=2)
			{
				cout<<" "<<10000000-i<<" "<<10000000+i;
			}
			cout<<endl;
		}
	}
	return 0;
}
