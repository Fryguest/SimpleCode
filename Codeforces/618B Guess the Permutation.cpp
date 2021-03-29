#include <bits/stdc++.h>
using namespace std;
const int N=55;
int a[N][N];
int ans[N];
int n;
bool check(int i, int x)
{
    for (int j=1;j<=n;j++)
    {
        if (i==j) continue;
        if (ans[j]!=0) continue;
        if (a[i][j]!=x) return false;
    }
    return true;
}
void cal(int x)
{
    for (int i=1;i<=n;i++)
    {
        if (ans[i]!=0) continue;
        if (check(i,x))
        {
            ans[i]=x;
            return;
        }
    }
}
int main()
{
    while(~scanf("%d",&n))
    {
        memset(ans,0,sizeof(ans));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++) cal(i);
        for(int i=1;i<=n;i++) printf("%d%c", ans[i], i==n?'\n':' ');
    }
    return 0;
}
