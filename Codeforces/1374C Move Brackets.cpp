#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,num;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		num=0;
		for (int i=0;i<n;i++)
		{
			if (s[i]=='(') num++;
			else if (num) num--;
		}
		cout<<num<<endl;
	}
	return 0;
}
