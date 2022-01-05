#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int num=3, x=4;
		while(n%num)
		{
			num+=x;
			x<<=1;
		}
		cout<<n/num<<endl;
	}
	return 0;
}
