#include<bits/stdc++.h>
using namespace std;
const int N=55;
char s[N];
int len;
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%s",s); len=strlen(s);
		a=b=c=0;
		for (int i=0;i<len;i++)
		{
			if (s[i]=='A') a++;
			else if (s[i]=='B') b++;
			else c++;
		}
		if (b==a+c) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
