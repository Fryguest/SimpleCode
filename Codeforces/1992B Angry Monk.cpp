#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int t;
    int n,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<k;i++) cin>>a[i];
        sort(a,a+k);
        ans=0;
        for(int i=0;i<k-1;i++) ans+=a[i]+a[i]-1;
        cout<<ans<<endl;
    }
    return 0;
}
