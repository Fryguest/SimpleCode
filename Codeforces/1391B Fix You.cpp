#include<bits/stdc++.h>
using namespace std;
const int N=105;
char a[N][N];
int main()
{
    int t,n,m;
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
        int num=0;
        for(int i=n-1;i>=1;i--)
        {
            if (a[i][m]!='D')num++;
        }
        for(int j=m-1;j>=1;j--)
        {
            if (a[n][j]!='R')num++;
        }
        cout<<num<<endl;


    }
    return 0;
}
