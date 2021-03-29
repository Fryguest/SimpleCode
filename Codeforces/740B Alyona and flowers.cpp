#include <bits/stdc++.h>
using namespace std;
const int N=105;
int a[N],s[N];
int main()
{
    int n,m;
    int ans,l,r;
    while (cin>>n>>m)
    {
        for (int i=1;i<=n;i++) cin>>a[i];
        memset(s,0,sizeof(s));
        for (int i=1;i<=n;i++)s[i]=s[i-1]+a[i];
        ans=0;
        for (int i=1;i<=m;i++)
        {
            cin>>l>>r;
            ans+=max(s[r]-s[l-1],0);
        }
        cout<<ans<<endl;
    }
    return 0;
}
