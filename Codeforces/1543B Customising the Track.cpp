#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
	int t;
	cin>>t;
	long long sum;
	long long x,y;
	int n;
	while (t--)
	{
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sum=0;
		for(int i=0;i<n;i++) sum+=a[i];
		x=sum%n;
		cout << x * (n-x)<<endl;
		
	}
	return 0;
}
