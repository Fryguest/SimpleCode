#include <bits/stdc++.h>
using namespace std;
const int N=15e4+5;
int f[N];
int num[N];
int v[N];

int find(int x)
{
    if (x==f[x]) return x;
    return f[x]=find(f[x]);
}

void merge(int a,int b)
{
    num[a]++;
    num[b]++;
    int x=find(a);
    int y=find(b);
    if (x!=y)
    {
        if (v[x]>v[y])
        {
            f[x]=y;
            v[y]+=v[x];
        }
        else
        {
            f[y]=x;
            v[x]+=v[y];
        }
    }
}

int main()
{
    int n,m,l,r;
    bool flag;
    while(~scanf("%d%d",&n,&m))
    {
        for (int i=1;i<=n;i++)f[i]=i;
        for (int i=1;i<=n;i++)v[i]=1;
        memset(num,0,sizeof(num));
        for (int i=1;i<=m;i++)
        {
            scanf("%d%d",&l,&r);
            merge(l,r);
        }
        flag=true;
        for (int i=1;i<=n;i++)
        {
            if (v[find(i)]!=num[i]+1)
            {
//                printf("%d\n", i);
                flag=false;
            }
        }
        if (flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

