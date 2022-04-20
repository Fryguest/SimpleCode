#include <bits/stdc++.h>
using namespace std;
vector<int>v,v1,v2;
int main()
{
	int n,k;
	int a,b,c;
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if (b&&c) v.push_back(a);
		else if (b) v1.push_back(a);
		else if (c) v2.push_back(a);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for (int i=0;i<v1.size()&&i<v2.size();i++) v.push_back(v1[i]+v2[i]);
	if (v.size()<k) printf("-1\n");
	else
	{
		sort(v.begin(),v.end());
		int sum=0;
		for (int i=0;i<k;i++) sum+=v[i];
		cout<<sum<<endl;
	}
	return 0;
}
