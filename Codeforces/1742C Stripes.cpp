#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string s;
	bool f;
	cin>>t;
	while(t--)
	{
		f=false;
		for(int i=0;i<8;i++)
		{
			cin>>s;
			if (s=="RRRRRRRR") f=true;
		}
		if (f) cout<<"R"<<endl;
		else cout<<"B"<<endl;
		
	}
	return 0;
}
