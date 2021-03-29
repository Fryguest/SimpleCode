#include <bits/stdc++.h>
using namespace std;
const int N=12e4+5;
long long a[N];
long long p[100];
map<long long, int>m;
void pre()
{
    p[0]=1;
    for (int i=1;i<=40;i++)p[i]=p[i-1]*2;
}
bool check(long long x)
{
    for (int i=1;i<=40;i++)
    {
        if (m.find(p[i]-x) != m.end())
        {
            if (p[i]-x==x)
            {
                if (m[x]>1) return true;
            }
            else return true;
        }
    }
    return false;
}
int main()
{
    int n,ans;
    pre();
    while (~scanf("%d",&n))
    {
        m.clear();
        for (int i=1;i<=n;i++) scanf("%lld", &a[i]);
        for (int i=1;i<=n;i++)
        {
            if (m.find(a[i])!=m.end()) m[a[i]]++;
            else m[a[i]]=1;
        }
        ans=0;
        for (int i=1;i<=n;i++)
        {
            if (!check(a[i])) ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
