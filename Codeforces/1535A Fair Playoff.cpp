#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,d;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>c>>d;
		if (max(a,b)>min(c,d)&&max(c,d)>min(a,b)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
