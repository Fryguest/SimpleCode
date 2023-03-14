#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=abs(n-k);
        if (n>=k)
        {
            ans=min(ans, n-((n-k)/2*2+k));
        }
        cout<<ans<<endl;
    }
    return 0;
}
