#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
int main()
{
    int t,n,r,ans;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&n,&r);
        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        ans=0;
        for (int i=n;i>=1;i--)
        {
            if (i<n && a[i]==a[i+1]) continue;
            if (a[i] <= (long long)ans*r) break;
            else ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
