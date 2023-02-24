#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
long long s[N];
int main()
{
    int t,n;
    long long ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        ans=0;
        for(int i=n;i>=1;i--)
        {
            if (i+a[i]<=n) s[i]=a[i]+s[i+a[i]];
            else s[i]=a[i];
            ans=max(ans,s[i]);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
