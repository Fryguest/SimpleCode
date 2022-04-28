#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[2],x;
	bool f;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n-=2;
		cin>>a[0]>>a[1];
		f=true;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if (x%2!=a[i%2]%2)f=false;
		}
		if (f)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
