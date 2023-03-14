#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n--)
        {
            cin>>x;
            if (x!=2) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
