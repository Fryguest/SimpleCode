#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int x=0,y=0;
		bool f=false;
		for(int i=0;i<n;i++)
		{
			if (s[i]=='L') x--;
			else if (s[i]=='R') x++;
			else if (s[i]=='U') y++;
			else if (s[i]=='D') y--;
			if (x==1&&y==1)
			{
				f=true;
				break;
			}
		}
		if (f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
