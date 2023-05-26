#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
    int t,n,a,ans;
    string b;
    map<string,int>m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m["00"]=m["01"]=m["10"]=m["11"]=mod;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            m[b]=min(m[b],a);
        }
        ans=min(m["01"]+m["10"],m["11"]);
        if (ans==mod) cout<<-1<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}
