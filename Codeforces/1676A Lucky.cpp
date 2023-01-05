#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	char c;
	scanf("%d", &t);
	while(t--)
	{
		a=b=0;
		for(int i=0;i<3;i++)
		{
			scanf(" %c", &c);
			a+=c;
		}
		for(int i=0;i<3;i++)
		{
			scanf(" %c", &c);
			b+=c;
		}
		if (a==b) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
