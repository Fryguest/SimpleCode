#include<bits/stdc++.h>
using namespace std;
const int N=2005;
char s[N];
int main()
{
	int t,n,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&n,&a,&b);
		for(int i=0;i<b;i++) s[i]=i+'a';
		for(int i=b;i<a;i++) s[i]='a';
		for(int i=a;i<n;i++) s[i]=s[i-a];
		s[n]='\0';
		printf("%s\n",s);
		
	}
	return 0;
}
