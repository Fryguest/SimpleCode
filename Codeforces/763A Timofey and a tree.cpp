#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int>v[N];
int l[N],r[N];
int a[N];
bool test1(int x, int f, int r)
{
    if (a[x]!=r) return false;
    for (auto num : v[x])
    {
        if (num == f) continue;
        if (!test1(num,x,r)) return false;
    }
    return true;
}
bool cal(int x)
{
    for (auto num : v[x])
    {
        if (!test1(num,x,a[num])) return false;
    }
    return true;
}
int main()
{
    int n,ans;
    while (~scanf("%d",&n))
    {
        for (int i=1;i<=n;i++) v[i].clear();
        for (int i=1;i<n;i++) scanf("%d%d", &l[i],&r[i]);
        for (int i=1;i<=n;i++) scanf("%d",&a[i]);
        for (int i=1;i<n;i++)
        {
            v[l[i]].push_back(r[i]);
            v[r[i]].push_back(l[i]);
        }
        ans=0;
        for (int i=1;i<n;i++)
        {
            if (a[l[i]]!=a[r[i]])
            {
                if (cal(l[i])) ans=l[i];
                else if (cal(r[i])) ans=r[i];
                else ans=-1;
                break;
            }
        }
        if (ans==0) ans=1;
        if (ans==-1) printf("NO\n");
        else printf("YES\n%d\n",ans);
    }
    return 0;
}


