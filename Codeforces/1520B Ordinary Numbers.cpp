#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long n;
		cin>>n;
		int ans = 0;
		for (int i = 1; i <=9; i++)
		{
			long long x = i;
			while (x <= n)
			{
				ans++;
				x = x  * 10 + i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}