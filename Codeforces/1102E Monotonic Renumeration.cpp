#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
const int mod = 998244353;
int a[N];
map<int,int>r;
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        for (int i=1;i<=n;i++) scanf("%d", &a[i]);
        for (int i=1;i<=n;i++) r[a[i]]=i;

        long long ans=1;
        int x=r[a[1]];
        for (int i=2;i<=n;i++)
        {
            if (i>x) ans=ans*2%mod;
            if (x<r[a[i]]) x=r[a[i]];
        }
        printf("%lld\n", ans);
    }

    return 0;
}
