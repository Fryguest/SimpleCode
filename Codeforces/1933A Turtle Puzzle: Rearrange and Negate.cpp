#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n--) {cin>>x; ans+=abs(x);}
        cout<<ans<<endl;
    }
    return 0;
}
