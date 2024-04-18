#include <bits/stdc++.h>
using namespace std;
const int N=25;
char a[N][N];
int main()
{
    int t;
    int n,m,x;
    string s="vika";
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }

        x=0;
        for (int j=1;j<=m;j++)
        {
            if (x>=s.length()) break;
            for(int i=1;i<=n;i++)
            {
                if (a[i][j]==s[x])
                {
                    x++;
                    break;
                }
            }
        }
        if (x>=s.length())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
