#include <iostream>
using namespace std;
int main()
{
	int t,ans;
	string n;
	bool f;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=0;
		for (int i=0;i<n.length();i++) if (n[i]!='0') ans++;
		cout<<ans<<endl;
		f=false;
		for (int i=0;i<n.length();i++)
		{
			if (n[i]!='0')
			{
				if (f) cout<<" ";
				cout<<n[i];
				for (int j=i+1;j<n.length();j++) cout<<"0";
				f=true;
			}
		}
		cout<<endl;
	}
}
