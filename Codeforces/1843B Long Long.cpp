#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int t,n;
    long long ans;
    int cnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans=0;
        cnt=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            ans+=abs(a[i]);
            if (a[i]==0) {i--;n--;}
        }
        for(int i=0;i<n;i++)
        {
            if (a[i]<0)
            {
                if (i==0 or a[i-1]>0) cnt++;
            }
        }
        printf("%lld %d\n",ans,cnt);

    }
    return 0;
}
