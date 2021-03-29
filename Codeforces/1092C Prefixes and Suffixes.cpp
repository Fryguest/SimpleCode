#include <bits/stdc++.h>
using namespace std;
const int N=105*2;
int n;
vector<string>v;
string s[N];
int ans[N];
bool S(string a, string b)
{
	for (int i=0;i<a.length();i++)
		if (a[a.length()-i-1]!=b[b.length()-i-1]) return false;
	return true;
}
bool P(string a, string b)
{
	for (int i=0;i<a.length();i++)
		if (a[i]!=b[i]) return false;
	return true;
}
void cal()
{
	for (int i=0;i<2*n-2;i++)
	{
		if (ans[i]==0)
		{
			for (int j=i+1;j<2*n-2;j++)
			{
				if (s[j]==s[i])
				{
					ans[i]=1;
					ans[j]=2;
					break;
				}
			}
		}
	}
	for (int i=0;i<2*n-2;i++)
	{
		if (ans[i]==1) cout<<"P";
		else cout<<"S";
	}
	cout<<endl;
	
}
bool check(string a, string b)
{
	string str=a+b[n-2];
	for (int i=0;i<2*n-2;i++)
	{
		if (P(s[i],str)) 
		{
			if (S(s[i],str)) ans[i]=0;
			else ans[i]=1;
		}
		else if (S(s[i],str)) 
		{
			ans[i]=2;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cin>>n;
	for (int i=0;i<2*n-2;i++) 
	{
		cin>>s[i];
		if (s[i].length()==n-1) v.push_back(s[i]);
	}
	if (check(v[0],v[1])) cal();
	else if (check(v[1],v[0])) cal();
	
	return 0;
}
