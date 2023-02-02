#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
char s[N];
int main()
{
	int t,n,a,b;
	long long len1,len2,len;
	bool f1,f2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		f1=f2=false;
		len1=len2=1;
		while(n--)
		{
			scanf("%d%d%s",&a,&b,s);
			len=strlen(s);
			if (a==1) len1+=len*b;
			else len2+=len*b;
			for (int i=0;i<len;i++)
			{
				if (s[i]!='a')
				{
					if (a==1) f1=true;
					else f2=true;
					break;
				}
			}
			if (f2) printf("YES\n");
			else if (f1) printf("NO\n");
			else
			{
				if (len1<len2) printf("YES\n");
				else printf("NO\n");
			}
		
		}
	}
	return 0;
}
