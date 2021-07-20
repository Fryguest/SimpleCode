#include <bits/stdc++.h>
using namespace std;
int a[30];
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		for (int i = 0; i < 2 * n; i++) cin>>a[i];
		sort(a, a + 2 * n);
		cout << a[0] << " " << a[n];
		for (int i = 1; i < n; i++) cout<< " " << a[i] << " " << a[i + n];
		cout<<endl;
	}
	return 0;
}
