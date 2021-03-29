#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int num[N];
struct point
{
    int x;
    int index;
    friend bool operator<(point a, point b)
    {
        return a.x<b.x;
    }
    point(int _x, int _index){x=_x; index=_index;}
};
vector<point>v[N];
priority_queue<point>q;
vector<int> result;
int main()
{
    int k,n,ans,l,r,temp, maxn;
    while (~scanf("%d%d",&n,&k))
    {
        for (int i=0;i<N;i++) v[i].clear();
        while (!q.empty()) q.pop();
        memset(num,0,sizeof(num));
        maxn=0;
        for (int i=1;i<=n;i++)
        {
            scanf("%d%d",&l,&r);
            v[l].push_back(point(r,i));
            num[l]++;
            num[r+1]--;
            maxn=max(maxn, r+1);
        }
        ans=0;
        temp=0;
        result.clear();
        for (int i=1;i<maxn;i++)
        {
            temp+=num[i];
            for (auto o : v[i]) q.push(o);
            while (temp>k)
            {
                point p=q.top(); q.pop();
                num[p.x+1]++;
                temp--;
                ans++;
                result.push_back(p.index);
            }
        }
        printf("%d\n",ans);
        for (int i=0;i<result.size();i++)
        {
            printf("%d%c", result[i], i==result.size()-1?'\n':' ');
        }
    }
    return 0;
}
