#include<bits/stdc++.h>
using namespace std;
bool v[1440];
bool is(int x)
{
	int h=x/60;
	int m=x%60;
	if (h%10==m/10&&h/10==m%10) return true;
	return false;
}
int main()
{
	int t,x,ans;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s>>x;
		int h=(s[0]-'0')*10+s[1]-'0';
		int m=(s[3]-'0')*10+s[4]-'0';
		int a=h*60+m;
		memset(v,0,sizeof(v));
		int ans=0;
		while(v[a%1440]==0)
		{
			if (is(a%1440)) ans++;
			v[a%1440]=1;
			a+=x;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}
