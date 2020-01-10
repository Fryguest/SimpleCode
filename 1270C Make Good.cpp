#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        for (int i=1;i<=n;i++) scanf("%lld", &a[i]);
        long long sum=0, count=0;
        long long x,y;
        for (int i=1;i<=n;i++)
        {
            sum+=a[i];
            count^=a[i];
        }
        x=count;
        y=sum+count;
        printf("2\n");
        printf("%lld %lld\n",x,y);
    }

    return 0;
}
