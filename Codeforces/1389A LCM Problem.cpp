#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		if (b<a*2) printf("-1 -1\n");
		else printf("%d %d\n",a,a*2);
	}
	return 0;
}
