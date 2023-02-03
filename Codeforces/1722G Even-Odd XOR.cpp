#include<bits/stdc++.h>
using namespace std;
const int N=1<<30;
int main()
{
	int t,n,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		for(int i=1;i<n-1;i++)
		{
			sum^=i;
		}
		if (sum==0)
		{
			sum^=n-2;
			for(int i=0;i<n-2;i++)
			{
				printf("%d ", i);
			}
			printf("%d %d\n", sum|N, N);
		}
		else
		{
			for(int i=1;i<n-1;i++)
			{
				printf("%d ", i);
			}
			printf("%d %d\n", sum|N, N);
		}
		
	}
	return 0;
}
