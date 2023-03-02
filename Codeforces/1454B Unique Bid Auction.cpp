#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],s[N];
int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(s,0,sizeof(s));
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            s[a[i]]++;
        }
        ans=-1;
        for(int i=1;i<=n;i++)
        {
            if (s[a[i]]==1)
            {
                if (ans==-1) ans=i;
                else if (a[i]<a[ans]) ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
