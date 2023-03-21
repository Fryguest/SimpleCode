#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n;
int a[N],v[N];
void solve()
{
    memset(v,0,sizeof(v));
    for(int x=1;x<=n;x++)
    {
        for(int i=n;i>=2;i--)
        {
            if (a[i]==x)
            {
                if (i>x&&a[i]<a[i-1]&&!v[i-1])
                {
                    v[i-1]=1;
                    swap(a[i],a[i-1]);
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
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
        for(int i=1;i<=n;i++)
        {
            if(i!=1) cout<<" ";
            cout<<a[i];
        }cout<<endl;
    }
    return 0;
}
