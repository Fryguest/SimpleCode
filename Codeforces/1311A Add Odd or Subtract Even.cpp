#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		if (b>a) cout<<2-(b-a)%2<<endl;
		else if (b<a) cout<<(a-b)%2+1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}
