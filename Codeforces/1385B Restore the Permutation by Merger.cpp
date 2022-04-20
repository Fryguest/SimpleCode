#include <bits/stdc++.h>
using namespace std;
const int N=55;
bool v[N];
int a[N];
int main()
{
	int t,n,x,num;
	cin>>t;
	while(t--)
	{
		memset(v,0,sizeof(v));
		cin>>n;
		int num=0;
		for (int i=0;i<2*n;i++)
		{
			cin>>x;
			if (!v[x]) a[num++]=x;
			v[x]=1;
		}
		for (int i=0;i<n;i++) cout<<a[i]<<(i==n-1?'\n':' ');
	}
	return 0;
}
