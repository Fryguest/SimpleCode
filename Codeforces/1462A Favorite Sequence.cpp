#include<bits/stdc++.h>
using namespace std;
const int N=300+5;
int a[N];
int main()
{
	int t,n,l,r;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		l=0, r=n-1;
		while(l<r-1)
		{
			printf("%d %d ",a[l],a[r]);
			l++;r--;
		}
		if (l==r) printf("%d\n",a[l]);
		else printf("%d %d\n",a[l],a[r]);
		
	}
	return 0;
}
