#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
	int t,n,max1,max2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)scanf("%d",&a[i]);
		if (a[0]>a[1]) {max1=0;max2=1;}
		else {max2=0;max1=1;}
		for(int i=2;i<n;i++)
		{
			if (a[i]>a[max1]) {max2=max1;max1=i;}
			else if (a[i]>a[max2]) max2=i;
		}
		for(int i=0;i<n;i++)
		{
			if (i) printf(" ");
			if (i==max1) printf("%d",a[i]-a[max2]);
			else printf("%d",a[i]-a[max1]);
		}
		printf("\n");
	}
	return 0;
}
