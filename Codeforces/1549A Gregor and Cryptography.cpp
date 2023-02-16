#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n--;
		for(int i=2;i*i<=n;i++)
		{
			if (n%i==0)
			{
				printf("%d %d\n",i,n);
				break;
			}
		}
	}
	return 0;
}
