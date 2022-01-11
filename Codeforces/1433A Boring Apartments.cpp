#include<iostream>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<10*(s[0]-'1')+s.length()*(s.length()+1)/2<<endl;
	}
	return 0;
}
