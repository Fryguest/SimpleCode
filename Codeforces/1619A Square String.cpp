#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if (s.length()%2) cout<<"NO"<<endl;
		else
		{
			for (int i=0;2*i<s.length();i++)
			{
				if (s[i]!=s[i+s.length()/2])
				{
					cout<<"NO"<<endl;
					break;
				}
				if (i==s.length()/2-1)
				{
					cout<<"YES"<<endl;
				}
			}
		}
	}
	
	return 0;
}
