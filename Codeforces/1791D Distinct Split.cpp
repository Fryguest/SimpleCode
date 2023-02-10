#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
int l[N];
map<char,int>ml,mr;
int main()
{
	int t,n,ans,len;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%s",&n,s);
		len=strlen(s);
		ml.clear();
		mr.clear();
		for(int i=0;i<len;i++)
		{
			ml[s[i]]++;
			l[i]=ml.size();
		}
		ans=0;
		for(int i=len-1;i>0;i--)
		{
			mr[s[i]]++;
			ans=max(ans,(int)(l[i-1]+mr.size()));
		}
		printf("%d\n",ans);
	}
	return 0;
}
