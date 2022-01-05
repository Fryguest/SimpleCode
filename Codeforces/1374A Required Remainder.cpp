#include<iostream>
using namespace std;
int main()
{
	int t,x,y,n;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n;
		if (n>=n/x*x+y) cout<<n/x*x+y<<endl;
		else cout<<(n/x-1)*x+y<<endl;
	}
	return 0;
}
