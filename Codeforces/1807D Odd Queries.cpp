#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],sum[N];
int main()
{
    int t,n,q;
    int l,r,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(int i=1;i<=n;i++)cin>>a[i];
        sum[0]=0;
        for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i];
        while(q--)
        {
            cin>>l>>r>>k;
            if ((sum[n]-(sum[r]-sum[l-1])+k*(r-l+1))%2)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
