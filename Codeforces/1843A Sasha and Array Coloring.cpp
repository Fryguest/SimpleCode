#include <bits/stdc++.h>
using namespace std;
const int N=55;
int a[N];
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int ans=0;
        for (int i=1;i+i<=n;i++)
        {
            ans+=a[n-i+1]-a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
