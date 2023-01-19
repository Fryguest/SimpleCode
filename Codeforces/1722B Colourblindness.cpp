#include <bits/stdc++.h>
using namespace std;
const int N=105;
int n;
char s1[N], s2[N];
bool test()
{
	for (int i=0;i<n;i++)
	{
		if ((s1[i]=='R'&&s2[i]!='R')||(s1[i]!='R'&&s2[i]=='R')) return false;
	}
	return true;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%s%s",&n,s1,s2);
		if (test()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
