#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int num[N];
bool v[N];
int check(int x, int d)
{
    v[x]=1;
    if (v[a[x]]) return num[x]=d;
    return num[x]=check(a[x],d+1);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
        memset(v,0,sizeof(v));
        for (int i=1;i<=n;i++)
        {
            if (!v[i]) check(i,1);
        }
        for (int i=1;i<=n;i++)
        {
            printf("%d%c", num[i], i==n?'\n':' ');
        }
    }
    return 0;
}
