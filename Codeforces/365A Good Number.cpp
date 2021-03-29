#include <bits/stdc++.h>
using namespace std;
bool check(int x, int k)
{
    bool a[10]={0};
    while (x)
    {
        a[x%10]=1;
        x/=10;
    }
    for (int i=0;i<=k;i++) if (!a[i]) return false;
    return true;
}
int main()
{
    int n,k;
    int ans,x;
    while (~scanf("%d%d",&n,&k))
    {
        ans=0;
        for (int i=1;i<=n;i++)
        {
            scanf("%d", &x);
            if (check(x,k)) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
