#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long a,b;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		if (a==b) {
			cout<<"0 0"<<endl;
			continue;
		}
		long long x = abs(a-b);
		long long y = min(a-a/x*x, (a+x-1)/x*x-a);
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}
