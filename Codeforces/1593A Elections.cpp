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
		int a[3];
		for (int i=0;i<3;i++) cin>>a[i];
		int max=a[0];
		bool f=false;
		for (int i=1;i<3;i++)
		{
			if (a[i]>max)
			{
				max=a[i];
				f=false;
			}
			else if (a[i]==max)
			{
				f=true;
			}
		}
		for (int i=0;i<3;i++)
		{
			if (i)cout<<" ";
			if (a[i]==max&&!f) cout<<0;
			else cout<<max+1-a[i];
		}
		cout<<endl;
		
	}
	
	return 0;
}
