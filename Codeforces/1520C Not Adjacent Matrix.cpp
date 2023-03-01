#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n;
int a[N][N];
int num;
void run(int s)
{
    int x,y;
    if (s<=n)
    {
        x=s;
        y=1;
    }
    else
    {
        x=n;
        y=s-n+1;
    }

    while(x>0&&y<=n)
    {
        a[x--][y++]=num++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n==2) cout<<-1<<endl;
        else
        {
            num=1;
            for(int i=1;i<=n+n-1;i+=2)run(i);
            for(int i=2;i<=n+n-1;i+=2)run(i);
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if (j!=1) cout<<" ";
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
