#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if (a%b==0) return b;
	return gcd(b,a%b);
}
string solve(const string& s1, const string& s2)
{
	int len=s1.length()*s2.length()/gcd(s1.length(),s2.length());
	string ans;
	for(int i=0;i<len;i++)
	{
		if (s1[i%s1.length()]!=s2[i%s2.length()]) return "-1";
		ans+=s1[i%s1.length()];
	}
	return ans;
}
int main()
{
	int t;
	string s1,s2;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2;
		cout<<solve(s1,s2)<<endl;
	}
	return 0;
}
