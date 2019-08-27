#include <bits/stdc++.h>
using namespace std;
const int N=1005;
vector<int> v[N];
vector<int> d;
struct Tree
{
    int mid=0;
    int len=0;
    friend bool operator<(Tree a, Tree b)
    {
        return a.len<b.len;
    }
}tree[N];
int f[N], node;
int find(int x)
{
    if (f[x]==x) return x;
    return f[x]=find(f[x]);
}
void merge(int x, int fa)
{
    if (fa!=-1) f[x]=find(fa);
    for (int i=0;i<v[x].size();i++)
    {
        if (v[x][i]==fa) continue;
        merge(v[x][i],x);
    }
    return;
}
void dfs(int x, int fa)
{
    d.push_back(x);
    int tmp = find(x);
    if (d.size() > tree[tmp].len)
    {
        tree[tmp].mid=d[d.size()/2];
        tree[tmp].len=d.size()-1;
        node=x;
    }
    for (int i=0;i<v[x].size();i++)
    {
        if (v[x][i]==fa) continue;
        dfs(v[x][i],x);
    }
    d.pop_back();
    return;
}
void cal(int x)
{
    d.clear();
    dfs(x,-1);
    d.clear();
    dfs(node,-1);
}
int main()
{
    int n,m;
    while (~scanf("%d%d",&n,&m))
    {
        for (int i=1;i<=n;i++) v[i].clear();
        for (int i=1;i<=n;i++) f[i]=i;
        for (int i=1;i<=n;i++) {tree[i].mid=i; tree[i].len=0;}
        for (int l,r,i=1;i<=m;i++)
        {
            scanf("%d%d",&l,&r);
            v[l].push_back(r);
            v[r].push_back(l);
        }
        for (int i=1;i<=n;i++) if (find(i)==i) merge(i,-1);
        for (int i=1;i<=n;i++) if (find(i)==i) cal(i);

        priority_queue<Tree> q;
        while (!q.empty()) q.pop();
        for (int i=1;i<=n;i++) if (find(i)==i) q.push(tree[i]);
        vector<pair<int,int>> result;
        while (q.size()>1)
        {
            Tree p1 = q.top(); q.pop();
            Tree p2 = q.top(); q.pop();
            Tree p3;
            p3.len=(p1.len+1)/2 + max(p1.len/2, (p2.len+1)/2 + 1);
            p3.mid=p1.mid;
            result.push_back(make_pair(p1.mid, p2.mid));
            q.push(p3);
        }
        printf("%d\n", q.top().len);
        for (auto& p : result) printf("%d %d\n", p.first, p.second);
    }
    return 0;
}
