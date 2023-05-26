#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int a[N];
map<int, int>m;
bool equal(map<int, int>m1, map<int,int>m2)
{
    if (m1.size()!=m2.size()) return false;
    for (auto e: m1)
    {
        if (m2.find(e.first) == m2.end()) return false;
        if (m2.at(e.first)!=e.second) return false;
    }
    return true;
}
bool check(int x,int y)
{
    map<int, int>m2;
    m2[x]=1;
    m2[1]+=x*y;
    m2[y+1]=x;
    return equal(m, m2);
}
int find(int x)
{
    for(auto e: m)
    {
        if(e.second==x) return e.first;
    }
}
int main()
{
    int t,n,q;
    int x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        memset(a,0,sizeof(a));
        m.clear();
        for(int l,r,i=1;i<=q;i++)
        {
            scanf("%d%d",&l,&r);
            a[l]++; a[r]++;
        }
        for(int i=1;i<=n;i++) m[a[i]]++;
        if (m.size()==3)
        {
            x=find(1);
            y=m[1]/x;
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            if (check(1,m[1]-1))
            {
                cout<<1<<" "<<m[1]-1<<endl;
            }
            else
            {
                for(auto e: m)
                {
                    if(e.first!=1) x=e.second-1;
                }
                y=m[1]/x;
                cout<<x<<" "<<y<<endl;
            }
        }
    }

    return 0;
}
