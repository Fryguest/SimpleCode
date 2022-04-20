#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x;
		int a=0,b=0;
		cin>>n>>m;
		for (int i=1;i<=n;i++)
		{
			cin>>x;
			if (x%2) a++;
			else b++;
		}
		if (a==0) {cout<<"NO"<<endl;continue;}
		a--;
		m--;
		if (m%2&&b==0) cout<<"NO"<<endl;
		else if (a%2 && a-1+b<m) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	
	return 0;
}
