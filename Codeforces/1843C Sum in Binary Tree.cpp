#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=0;
        while(n)
        {
            ans+=n;
            n>>=1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
