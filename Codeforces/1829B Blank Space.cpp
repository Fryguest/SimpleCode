#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,ans,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=cnt=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if (x) cnt=0;
            else cnt++;
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }

    return 0;
}
