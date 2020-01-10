#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
        for (int i=2;i<=n;i++)
        {
            if (abs(a[i]-a[i-1]) >=2)
            {
                printf("YES\n%d %d\n", i-1,i);
                break;
            }
            if (i==n)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
