#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int>v[N];
int dis1[N], dis2[N];
int s,a,b;
struct Point
{
    int x,f;
    Point(int _x, int _f) { x=_x; f=_f; }
};

queue<Point> q;
void dfs1(int x,int f,int d)
{
    if (dis1[x]!=-1)
    {
        if(s==-1)s=x;
        return;
    }
    dis1[x]=d;
    for(int i=0;i<v[x].size();i++)
    {
        int& node=v[x][i];
        if (node==f) continue;
        dfs1(node, x, d+1);
    }
}
void bfs1()
{
    while(!q.empty()) q.pop();
    memset(dis1,-1,sizeof(dis1));
    dis1[b]=0;
    q.push(Point(b,0));
    while(!q.empty())
    {
        int x=q.front().x;
        int f=q.front().f;
        q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            int node=v[x][i];
            if (node==f||dis1[node]!=-1) continue;
            dis1[node]=dis1[x]+1;
            q.push(Point(node,x));
        }
    }
}

void bfs2()
{
    while(!q.empty()) q.pop();
    memset(dis2,-1,sizeof(dis2));
    dis2[a]=0;
    q.push(Point(a,0));
    while(!q.empty())
    {
        int x=q.front().x;
        int f=q.front().f;
        q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            int node=v[x][i];
            if (node==f||dis2[node]!=-1) continue;
            dis2[node]=dis2[x]+1;
            q.push(Point(node,x));
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    int n,l,r;
    while(t--)
    {
        scanf("%d%d%d",&n,&a,&b);
        for(int i=1;i<=n;i++) v[i].clear();
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&l,&r);
            v[l].emplace_back(r);
            v[r].emplace_back(l);
        }
        memset(dis1,-1,sizeof(dis1));
        memset(dis2,-1,sizeof(dis2));
        s=-1;
        dfs1(b,0,0);
        bfs1();
        bfs2();
        if (dis1[s]<dis2[s]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

