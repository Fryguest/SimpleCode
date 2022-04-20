#include<bits/stdc++.h>
using namespace std;
const int N=505;
int a[N],b[N];
vector<int>result;
void rotate(int x, int d)
{
	if (d)
	{
		int c=a[x];
		a[x]=a[x+2];
		a[x+2]=a[x+1];
		a[x+1]=c;
		result.push_back(x);
	}
	else
	{
		int c=a[x];
		a[x]=a[x+1];
		a[x+1]=a[x+2];
		a[x+2]=c;
		result.push_back(x);
		result.push_back(x);
	}
}
void Lmove(int s,int t)
{
	while(t!=s)
	{
		if (s==t+1)
		{
			rotate(t, 0);
			return;
		}
		else
		{
			rotate(s-2, 1);
			s-=2;
		}
	}
	return;
}
void Rmove(int s,int t)
{
	while(t!=s)
	{
		rotate(s,1);
		rotate(s,1);
		s+=2;
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		result.clear();
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		for(int i=0;i<n-2;i++)
		{
			if (a[i]==b[i]) continue;
			for (int j=i+1;j<n;j++)
			{
				if (a[j]==b[i])
				{
					Lmove(j,i);
					break;
				}
			}
		}
		bool f=true;
		if(a[n-2]!=b[n-2])
		{
			if (a[n-1]==a[n-3])
			{
				result.push_back(n-3);
			}
			else
			{
				for (int i=0;i<n-2;i++)
				{
					if (a[i]==a[i+1])
					{
						//cout<<i<<" "<<n-2<<endl;
						if ((n-i)%2==0)
						{
							Lmove(n-2,i+2);
							rotate(i,0);
							Rmove(i+1,n-1);
						}
						else
						{
							Lmove(n-2,i+1);
							rotate(i,1);
							Rmove(i+2,n-1);
						}
						break;
					}
					if (i==n-3) f=false;
				}
			}
		}
		//for (int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
		if (f)
		{
			cout<<result.size()<<endl;
			for(int i=0;i<result.size();i++)
			{
				if (i) cout<<" ";
				cout<<result[i]+1;
			}
			cout<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}
