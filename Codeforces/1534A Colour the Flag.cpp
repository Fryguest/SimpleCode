#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        char x;
        bool f=true;
        int a=-1,b=-1;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                cin>>x;
                if (x=='R')
                {
                    if (a==-1) a=(i+j)%2;
                    else f=f&&((i+j+a)%2==0);
                }
                else if (x=='W')
                {
                    if (b==-1) b=(i+j)%2;
                    else f=f&&((i+j+b)%2==0);
                }
            }
        }
        if (a!=-1 and a==b) f=false;
        if (!f) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<m;j++)
                {
                    if (a==-1 and b==-1)
                    {
                        if ((i+j)%2) cout<<"R";
                        else cout<<"W";
                    }
                    else if (a==-1)
                    {
                        if ((i+j)%2!=b) cout<<"R";
                        else cout<<"W";
                    }
                    else
                    {
                        if ((i+j)%2==a) cout<<"R";
                        else cout<<"W";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
