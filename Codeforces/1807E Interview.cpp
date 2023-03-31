#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],sum[N];
int n;
void ask(int l,int r)
{
    cout<<"? "<<r-l+1;
    for(int i=l;i<=r;i++) cout<<" "<<i;
    cout<<endl;
}
int solve()
{
    int l=1,r=n,mid;
    int ans;
    while(l<r)
    {
        mid=((l+r)>>1);
        ask(l,mid);
        cin>>ans;
        if (ans!=sum[mid]-sum[l-1]) r=mid;
        else l=mid+1;
    }
    return l;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        sum[0]=0;
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
        int ans=solve();
        cout<<"! "<<ans<<endl;

    }
    return 0;
}
