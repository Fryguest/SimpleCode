#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
    int t,n,minn,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        minn=a[1];
        for(int i=1;i<=n;i++) minn=min(minn,a[i]);
        ans=0;
        for(int i=1;i<=n;i++) if (a[i]>minn) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
