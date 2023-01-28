#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		if (a<b) swap(a,b);
		int count=0;
		while(a<=n&&b<=n)
		{
			if (count++%2) a+=b;
			else b+=a;
		}
		cout<<count<<endl;
		
	}
	return 0;
}
