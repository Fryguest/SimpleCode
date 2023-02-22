#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int t,n,sum,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if (sum%n) cout<<-1<<endl;
        else
        {
            ans=0;
            for (int i=1;i<=n;i++) if (sum/n<a[i]) ans++;
            cout<<ans<<endl;
        }

    }
    return 0;
}
