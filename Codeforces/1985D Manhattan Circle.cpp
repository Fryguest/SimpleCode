#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    int x1,y1;
    int x2,y2;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        x1=y1=x2=y2=0;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
            {
                cin>>c;
                if (c=='#')
                {
                    if (x1==0)
                    {
                        x1=i;
                        y1=j;
                    }
                    if (y2==0||y2>j)
                    {
                        x2=i;
                        y2=j;
                    }
                }
            }
        }
        cout<<x2<<" "<<y1<<endl;
    }
    return 0;
}
