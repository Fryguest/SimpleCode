#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],b[N],c[N];
int main()
{
    int n,q,l,r;
    long long ans;
    while (~scanf("%d%d",&n,&q))
    {
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        ans=0;

        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
        for (int i=1;i<=q;i++)
        {
            scanf("%d%d",&l,&r);
            b[l]++;
            b[r+1]--;
        }
        for (int i=1;i<=n;i++) c[i]=c[i-1]+b[i];

        sort(c+1,c+n+1);
        sort(a+1,a+n+1);

        for (int i=1;i<=n;i++) ans+=(long long)a[i] * c[i];
        printf("%lld\n",ans);
    }
    return 0;
}
