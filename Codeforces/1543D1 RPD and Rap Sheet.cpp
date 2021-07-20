#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int n,k,ans;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		int x = 0;
		for (int i=0;i<n;i++)
		{
			cout<<(i^x)<<endl;
			cin>>ans;
			if (ans==1) break;
			else x=i;
		}
	}
	
	return 0;
}
