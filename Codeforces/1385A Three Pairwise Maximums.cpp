#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if (a==b&&b>=c) printf("YES\n%d %d 1\n",a,c);
		else if (a==c&&a>=b) printf("YES\n%d %d 1\n",b,c);
		else if (b==c&&b>=a) printf("YES\n1 %d %d\n",a,b);
		else printf("NO\n");
	}
	return 0;
}
