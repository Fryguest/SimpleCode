#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	char c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		x=0;
		for(int i=0;i<n;i++)
		{
			scanf(" %c",&c);
			if (c>x) x=c;
		}
		printf("%d\n", x-'a'+1);
	}
	return 0;
}
