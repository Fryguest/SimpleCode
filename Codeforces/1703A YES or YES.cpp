#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;
		if (s.length() != 3) cout<<"NO\n";
		else if (toupper(s[0])=='Y' && toupper(s[1]) == 'E' && toupper(s[2])=='S') cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
