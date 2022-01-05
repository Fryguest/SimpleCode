#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t,n;
	char c;
	bool f;
	cin>>t;
	vector<int>v,a;
	while(t--)
	{
		v.clear();
		a = vector<int>(255,0);
		cin>>n;
		while (n--)
		{
			cin>>c;
			if (v.empty() or c!=v.back()) v.emplace_back(c);
		}
		f=true;
		for (int x : v)
		{
			if (a[x]) {
				f=false;break;
			}
			a[x]=1;
		}
		if (f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	return 0;
}
