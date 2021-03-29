#include <bits/stdc++.h>
using namespace std;
const int N=1e2+5;
int a[N];
int main()
{
	int n,ans=0;
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int i=1;i<n;i+=2) ans+=a[i]-a[i-1];
	cout<<ans<<endl;
	return 0;
}
