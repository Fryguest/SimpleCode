#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct P{
    int x;
    int t;
}a[N];
int v[N];
int main()
{
    memset(v,0,sizeof(v));
    int n,q;
    int c,p,x;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d", &a[i].x);
        a[i].t=0;
    }
    scanf("%d", &q);
    for(int i=1;i<=q;i++)
    {
        scanf("%d", &c);
        if (c==1)
        {
            scanf("%d%d",&p,&x);
            a[p].x=x;
            a[p].t=i;
        }
        else
        {
            scanf("%d",&x);
            v[i]=x;
        }
    }
    for (int i=q-1;i>=0;i--)
    {
        v[i]=max(v[i],v[i+1]);
    }
    for (int i=1;i<=n;i++)
    {
        printf("%d%c", max(a[i].x, v[a[i].t]), i==n?'\n':' ');
    }
    return 0;
}