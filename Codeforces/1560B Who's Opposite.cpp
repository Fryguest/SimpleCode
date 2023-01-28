#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,n;
		cin>>a>>b>>c;
		n=abs(a-b)*2;
		if (n<a||n<b||n<c) cout<<-1<<endl;
		else if (c>n/2) cout<<c-n/2<<endl;
		else cout<<c+n/2<<endl;
	}
	return 0;
}
