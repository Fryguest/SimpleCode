#include <bits/stdc++.h>
using namespace std;

vector<int> cal(int x, int &k)
{
	vector<int> v;
	while(x)
	{
		v.push_back(x%k);
		x/=k;
	}
	return v;
};

int cal(vector<int>&v, int& k)
{
	int ans=0;
	for (int i=v.size()-1;i>=0;i--)
	{
		ans=ans*k+v[i];
	}
	return ans;
}

vector<int> add(vector<int>&a, vector<int>&b, int& k)
{
	int i;
	vector<int> v;
	for (i=0;i<a.size()&&i<b.size();i++)
	{
		v.push_back((a[i]+b[i])%k);
	}
	for (;i<a.size();i++) v.push_back(a[i]);
	for (;i<b.size();i++) v.push_back(b[i]);
	return v;
}

vector<int> sub(vector<int>&a, vector<int>&b, int& k)
{
	vector<int> v(max(a.size(),b.size()),0);
	for (int i=0;i<v.size();i++)
	{
		if (i<a.size() and i<b.size())
		{
			v[i] = (a[i]-b[i]+k)%k;
		}
		else if (i<a.size())
		{
			v[i]=a[i];
		}
		else
		{
			v[i]=(k-b[i])%k;
		}
	}
	return v;
}

int main()
{
	int t;
	int n,k,ans;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		vector<int>v;
		for (int i=0;i<n;i++)
		{
			vector<int> a = cal(i,k);
			
			vector<int> b;
			if (i%2==0) b = add(v,a,k);
			else b = sub(v,a,k);
			cout<<"guess:"<<cal(b,k)<<endl;
			cin>>ans;
			if (ans==1) break;
			v = sub(b,v,k);
			cout << "v : "<< cal(v,k)<<endl;
		}
	}
	return 0;
}
