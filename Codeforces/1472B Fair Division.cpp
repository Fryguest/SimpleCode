#include<iostream>
using namespace std;
int main()
{
	int t,n;
	int a,b,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=b=0;
		while(n--)
		{
			cin>>x;
			if (x==1) a++;
			else b++;	
		}
		if (b%2==0 and a%2==0) cout<<"YES"<<endl;
		else if (a%2==0 and a>=2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
