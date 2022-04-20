#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[3];
	cin>>t;
	while(t--)
	{
		cin>>a[0]>>a[1]>>a[2]>>n;
		sort(a,a+3);
		n-=a[2]+a[2]-a[0]-a[1];
		if (n%3||n<0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
