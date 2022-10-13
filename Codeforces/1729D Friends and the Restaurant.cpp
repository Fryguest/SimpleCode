#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N], b[N];
int main()
{
    int t,n,l,r,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        for (int i=0;i<n;i++) scanf("%d",&b[i]);
        for (int i=0;i<n;i++) b[i]-=a[i];
        sort(b,b+n);
        ans=0;
        l=0;
        r=n-1;
        while(l<r)
        {
            if (b[r]+b[l]>=0){
                ans++;
                r--;
                l++;
            }
            else {
                l++;
            }
        }
        printf("%d\n",ans);
        
    }
    return 0;
}