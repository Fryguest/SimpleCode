#include <bits/stdc++.h>
using namespace std;
int a[3005];
int main()
{
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	for (int i=2;i<=n;i++)
	{
		if (a[i]==0)
			for (int j=i+i;j<=n;j+=i) a[j]++;
	}
	int ans=0;
	for (int i=1;i<=n;i++) if (a[i]==2) ans++; 
	cout<<ans<<endl;
	return 0;
}
