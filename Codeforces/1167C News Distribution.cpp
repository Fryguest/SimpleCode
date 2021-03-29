#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int ans[N];
int f[N];
int find(int x)
{
    if (f[x]==x) return x;
    return f[x]=find(f[x]);
}
void merge(int a,int b)
{
    int x=find(a), y=find(b);
    f[x]=y;
}
int main()
{
    int n,m;
    int a,b,num;
    while (~scanf("%d%d",&n,&m))
    {
        for (int i=1;i<=n;i++) f[i]=i;
        for (int i=1;i<=m;i++)
        {
            scanf("%d", &num);
            if (num==0) continue;
            scanf("%d", &a);
            for (int i=1;i<num;i++)
            {
                scanf("%d", &b);
                merge(a,b);
            }
        }
        memset(ans,0,sizeof(ans));
        for (int i=1;i<=n;i++) ans[find(i)]++;
        for (int i=1;i<=n;i++) cout<<ans[find(i)]<<(i==n?"\n":" ");
    }
    return 0;
}
