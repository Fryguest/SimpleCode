#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>result;
	for (int i=1;i<=3000;i++)
	{
		if (i%3 and i%10!=3) result.emplace_back(i);
	}
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<result[n-1]<<endl;
	}
	
	return 0;
}
