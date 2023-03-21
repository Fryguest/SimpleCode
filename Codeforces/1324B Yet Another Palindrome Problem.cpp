#include<bits/stdc++.h>
using namespace std;
const int N=5005;
int v[N];
int main()
{
    int t,n,x;
    bool f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(v,0,sizeof(v));
        f=false;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if (v[x]&&i-v[x]>1) f=true;
            if (v[x]==0) v[x]=i;
        }
        if (f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
