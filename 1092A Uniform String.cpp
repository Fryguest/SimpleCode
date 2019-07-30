#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	string ans;
	cin>>t;
	while (t--)
	{
		ans="";
		cin>>n>>k;
		for (int i=0;i<n%k;i++)	ans+='a';
		for (int i=0;i<k;i++)
			for (int j=0;j<n/k;j++) 
				ans+=char(i+'a');
		cout<<ans<<endl;
	}
	return 0;
}
