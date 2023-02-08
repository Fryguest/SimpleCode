#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
	int t,n,x;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			cin>>s;
			for(int j=0;j<s.length();j++)
			{
				if (s[j]=='D') a[i]++;
				else a[i]--;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if (i!=1) cout<<" ";
			cout<<(a[i]%10+10)%10;
		}cout<<endl;
	}
	return 0;
}
