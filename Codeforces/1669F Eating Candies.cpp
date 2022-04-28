#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int s[N];
int main()
{
	int t,n;
	cin>>t;
	int a,b,l,r,sum;
	while(t--)
	{
		cin>>n;
		sum=0;
		for (int i=0;i<n;i++)
		{
			cin>>s[i];
			sum+=s[i];
		}
		a=b=0;
		l=r=-1;
		for (int i=0;i<n;i++)
		{
			a+=s[i];
			if (a+a>sum)
			{
				a-=s[i];
				b=sum-a;
				l=i-1;
				r=i;
				break;
			}
		}
		while (l>=0&&r<n)
		{
			if (a==b) break;
			if (a>b)
			{
				a-=s[l];
				l--;
			}
			else
			{
				b-=s[r];
				r++;
			}
		}
		if (l>=0&&r<n) cout <<l+1+n-r<<endl;
		else cout<<0<<endl; 
	}
	return 0;
}
