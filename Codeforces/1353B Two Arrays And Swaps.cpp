#include<iostream>
#include<algorithm>
using namespace std;
const int N=35;
int a[N],b[N];
int main()
{
	int t,n,k,sum;
	int l1,l2;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		sum=0;
		l1=l2=n-1;
		while (n--)
		{
			if (k && b[l2]>a[l1])
			{
				sum+=b[l2];
				k--;
				l2--;
			}
			else
			{
				sum+=a[l1];
				l1--;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
