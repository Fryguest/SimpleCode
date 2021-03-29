#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans,x;
    while (~scanf("%d%d%d",&n,&a,&b))
    {
        ans=0;
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            if (x<=a) ans++;
        }
        if (a>b) printf("%d\n",n);
        else printf("%d\n", (ans+1)/2);
    }
    return 0;
}
