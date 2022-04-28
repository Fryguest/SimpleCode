#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=0,b=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if (x>a)
			{
				b=a;
				a=x;
			}
			else if (x>b)
			{
				b=x;
			}
		}
		if (a-b>1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
