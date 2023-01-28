#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		n/=2;
		cout<<(n*(n+1)*2+4*(n*n*(n+1)))*2/3<<endl;
	}
	return 0;
}
