#include<bits/stdc++.h>
using namespace std;
int x,y;
char a[8][8];
void cal()
{
	bool f=false;
	for(int i=0;i<8;i++)
	{
		int count=0;
		for(int j=0;j<8;j++)
		{
			if (a[i][j]=='#') count++;
		}
		if (count==2) f=true;
		if (count==1 && f)
		{
			for(int j=0;j<8;j++)
			{
				if (a[i][j]=='#')
				{
					x=i+1;
					y=j+1;
					return;
				}
			}
		}
	}
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<8;i++)
			for(int j=0;j<8;j++)
				cin>>a[i][j];
		cal();
		cout<<x<<" "<<y<<endl;
		
	}
	return 0;
}
