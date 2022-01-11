#include<iostream>
using namespace std;
int main()
{
	int t;
	long long n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		while (!(n&1))n>>=1;
		if (n!=1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
