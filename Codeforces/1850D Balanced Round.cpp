#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        int l=0;
        int ans=1;
        for(int i=1;i<n;i++)
        {
            if (a[i]-a[i-1]>k)
            {
                ans=max(ans,i-l);
                l=i;
            }
        }
        ans=max(ans,n-l);
        printf("%d\n", n-ans);
    }
    return 0;
}
