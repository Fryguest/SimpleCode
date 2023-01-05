#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a=b=0;
		while(n--)
		{
			scanf("%d",&x);
			if(x&1) a++;
			else b++;
		}
		if (a>0&&b>0) printf("YES\n");
		else if (a>0&&(a&1)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
