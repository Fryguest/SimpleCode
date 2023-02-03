#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int l[N],r[N];
char s[N];
vector<int>v;
vector<long long>ans;
int main()
{
	int t,n;
	long long sum;
	int len;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s); len=strlen(s);
		sum=0;
		v.clear();
		for(int i=0;i<len;i++)
		{
			r[i]=len-1-i;
			l[i]=i;
			if (r[i]>l[i]&&s[i]=='L')v.push_back(r[i]-l[i]);
			else if (r[i]<l[i]&&s[i]=='R')v.push_back(l[i]-r[i]);
			if (s[i]=='L') sum+=l[i];
			else sum+=r[i];
		}
		sort(v.begin(),v.end());
		ans.clear();
		for(int i=v.size()-1;i>=0;i--)
		{
			sum+=v[i];
			ans.push_back(sum);
		}
		for(int i=v.size();i<n;i++)ans.push_back(sum);
		for(int i=0;i<n;i++)
		{
			if(i)printf(" ");
			printf("%lld",ans[i]);
		}printf("\n");
	}
	return 0;
}
