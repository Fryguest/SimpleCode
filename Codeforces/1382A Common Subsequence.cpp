#include<bits/stdc++.h>
using namespace std;
map<int,bool>ma;
int main()
{
    int t,n,m,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ma.clear();
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            ma[x]=1;
        }
        ans=-1;
        for(int i=1;i<=m;i++)
        {
            cin>>x;
            if (ma[x]) ans=x;
        }
        if (ans==-1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }

    }
    return 0;
}
