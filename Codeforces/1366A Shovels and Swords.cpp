#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b)
{
	if (a-b>b) return b;
	int ans=a-b;
	b-=ans;
	ans+=b/3*2;
	if (b%3==2) ans++;
	return ans;
	
}
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a>b) cout<<solve(a,b)<<endl;
		else cout<<solve(b,a)<<endl;
	}
	return 0;
}
