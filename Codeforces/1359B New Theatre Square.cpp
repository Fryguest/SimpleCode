#include<bits/stdc++.h>
using namespace std;
char a[105][1005];
int n,m,x,y;
int solve()
{
    if (2*x<=y)
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if (a[i][j]=='.') ans++;
            }
        }
        return ans*x;
    }
    else
    {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if (a[i][j]=='.'&&a[i][j+1]=='.')
                {
                    ans+=y;
                    j++;
                }
                else if (a[i][j]=='.')
                {
                    ans+=x;
                }
            }
        }
        return ans;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<solve()<<endl;
    }
    return 0;
}
