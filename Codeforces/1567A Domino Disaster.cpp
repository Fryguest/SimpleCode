#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if (s[i]=='L') printf("L");
			else if (s[i]=='R') printf("R");
			else if (s[i]=='U') printf("D");
			else if (s[i]=='D') printf("U");
		}
		printf("\n");
	}
	return 0;
}
