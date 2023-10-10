#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int n,x;
int cal(int h)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=max(0,h-a[i]);
        if (ans>x) return ans;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&x);
        for(int i=0;i<n;i++) scanf("%d", &a[i]);
        int ans=0;
        long long l=1, r=x+1e9;
        while(l<=r)
        {
            long long mid=(l+r)/2;
            int res=cal(mid);
            if (res>x)
            {
                r=mid-1;
            }
            else
            {
                ans=mid;
                l=mid+1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
