#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0;
	scanf("%d",&n);
	for (int x,i=1;i<=n;i++) 
	{
		scanf("%d",&x);
		if (x%2)
		{
			if (i%2) a++;
			else b++;
		}
	}
	if (a==b||(a-b==1 && n%2)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
