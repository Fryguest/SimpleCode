#include <iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<max(max(a,b),min(a,b)*2)*max(max(a,b),min(a,b)*2)<<endl;
	}
	return 0;
}
