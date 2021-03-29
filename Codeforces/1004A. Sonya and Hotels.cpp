#include <bits/stdc++.h>
using namespace std;
long long a[105];
int main()
{
	int ans=2;
	int n,d;
	scanf("%d%d", &n, &d);
	for (int i=1;i<=n;i++) scanf("%I64d", a+i);
	sort(a+1, a+n+1);
	for (int i=1;i<n;i++) 
	{
		if (a[i]+2*d == a[i+1]) {
			ans+=1;
		} else if (a[i] + 2*d < a[i+1])
		{
			ans+=2;
		}
	}
	printf("%d\n", ans);
	return 0;
}
