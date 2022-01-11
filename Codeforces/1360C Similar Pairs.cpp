#include<iostream>
#include<algorithm>
using namespace std;
const int N=55;
int a[N];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x=0,y=0;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			if (a[i]%2) x++;
			else y++;
		}
		if (x%2!=y%2) cout<<"NO"<<endl;
		else if (x%2==0) cout<<"YES"<<endl;
		else
		{
			sort(a,a+n);
			for(int i=1;i<n;i++)
			{
				if (a[i]-a[i-1]==1)
				{
					cout<<"YES"<<endl;
					break;
				}
				if (i==n-1)
				{
					cout<<"NO"<<endl;
				}
			}
		}
		
	}
	
	return 0;
}
