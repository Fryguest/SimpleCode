#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            ans&=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
