#include<iostream>
using namespace std;
const int N=55;
int a[N];
int cal(int x,int y)
{
	int ans=0;
	while (2*x < y)
	{
		x*=2;
		ans++;
	}
	return ans;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans;
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		ans=0;
		for (int i=0;i<n-1;i++) ans+=cal(min(a[i],a[i+1]), max(a[i],a[i+1]));
		cout<<ans<<endl;
	}
	
	return 0;
}
