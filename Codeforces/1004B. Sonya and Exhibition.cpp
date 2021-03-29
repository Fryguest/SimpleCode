#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=m;i++) scanf("%d%d",&a,&b);
	for (int i=1;i<=n;i++) {
		printf("%d", i%2);
	}printf("\n");
	return 0;
}
