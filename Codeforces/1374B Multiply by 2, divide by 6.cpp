#include<iostream>
using namespace std;
int main()
{
	int t,n;
	int a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=b=0;
		while (n%2==0)
		{
			a++; n/=2;
		}
		while (n%3==0)
		{
			b++; n/=3;
		}
		if (n!=1 or a>b) cout<<-1<<endl;
		else cout<<b+b-a<<endl;
	}
	return 0;
}
