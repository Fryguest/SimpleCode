#include<bits/stdc++.h>
using namespace std;
const int N=405;
int n;
char a[N][N];
vector<pair<int,int>>v;
void solve()
{
    if (v[0].first==v[1].first)
    {
        if (v[0].first==1)
        {
            a[2][v[0].second]='*';
            a[2][v[1].second]='*';
        }
        else
        {
            a[1][v[0].second]='*';
            a[1][v[1].second]='*';
        }
    }
    else if (v[0].second==v[1].second)
    {
        if(v[0].second==1)
        {
            a[v[0].first][2]='*';
            a[v[1].first][2]='*';
        }
        else
        {
            a[v[0].first][1]='*';
            a[v[1].first][1]='*';
        }
    }
    else
    {
        a[v[0].first][v[1].second]='*';
        a[v[1].first][v[0].second]='*';
    }
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    v.push_back({i,j});
                }
            }
        }
        solve();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
