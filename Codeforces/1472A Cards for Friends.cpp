#include<iostream>
using namespace std;
int main()
{
	int t;
	int a,b,n;
	int ans;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n;
		ans=1;
		while(!(a&1)) {a>>=1;ans*=2;}
		while(!(b&1)) {b>>=1;ans*=2;}
		cout<<(ans>=n?"YES":"NO")<<endl;
	}
	
	return 0;
}
