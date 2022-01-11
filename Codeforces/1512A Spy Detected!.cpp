#include<iostream>
using namespace std;
const int N=105;
int a[N];
int main()
{
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		if (a[0]==a[1])
		{
			for (int i=2;i<n;i++)
			{
				if (a[i]!=a[0])
				{
					cout<<i+1<<endl;
					break;
				}
			}
		}
		else
		{
			if (a[0]==a[2]) cout<<2<<endl;
			else cout<<1<<endl;
		}
	}
	return 0;
}
