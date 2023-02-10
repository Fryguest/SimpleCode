#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(int i=0;i<s.length()/2;i++)
		{
			if (s[i]+s[s.length()-1-i]!='1'+'0') break;
			n-=2;
		}
		cout<<n<<endl;
	}
	return 0;
}
