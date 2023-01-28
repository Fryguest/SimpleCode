#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,sum;
		cin>>n;
		sum=0;
		for(int i=1;i<=n;i++){cin>>x;sum+=x;}
		if (sum==n) cout<<0<<endl;
		else if (sum<n) cout<<1<<endl;
		else cout<<sum-n<<endl;
	}
	return 0;
}
