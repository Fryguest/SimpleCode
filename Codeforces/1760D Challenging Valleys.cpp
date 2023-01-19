#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int n;
bool cal()
{
	int count=0;
	bool l=true;
	for(int i=1;i<n;i++)
	{
		if (a[i]>a[i-1])
		{
			if (l) count++;
			l=false;
		}
		else if (a[i]<a[i-1]) l=true;
	}
	if (l) count++;
	return count==1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		if (cal()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
