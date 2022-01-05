#include <iostream>
#include <algorithm>
using namespace std;
const int N=55;
int a[N];
int main()
{
	int t,n;
	int ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ans=a[1]-a[0];
		for (int i=2;i<n;i++)
		{
			ans=min(ans, a[i]-a[i-1]);
		}
		cout<<ans<<endl;
	}
	return 0;
}
