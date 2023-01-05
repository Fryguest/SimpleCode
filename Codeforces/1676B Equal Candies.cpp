#include<bits/stdc++.h>
using namespace std;
const int N=55;
int a[N];
int main()
{
	int t,n,sum,minn;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		minn=1e7+5;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]<minn) minn=a[i];
			sum+=a[i];
		}
		printf("%d\n",sum-minn*n);
	}
	return 0;
}
