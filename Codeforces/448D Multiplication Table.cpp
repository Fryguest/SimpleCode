#include <bits/stdc++.h>
using namespace std;
long long n,m,k;
bool cal(long long x)
{
    long long num=0;
    for (int i=1;i<=n;i++)
    {
        num+=min(x/i,m);
    }
    return num>=k;
}
int main()
{
    while (cin>>n>>m>>k)
    {
        long long l=1, r=n*m;
        long long ans;
        while (l<r)
        {
            long long mid = (l+r)/2;
            if (cal(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
