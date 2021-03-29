#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct point
{
    int x;
    int num;
    point(int _x, int _num)
    {
        x=_x; num=_num;
    }
    friend bool operator<(point a,point b)
    {
        return a.x<b.x;
    }
};
int a[N];
int v[N];
set<point>s;
int main()
{
    int n;
    while (cin>>n)
    {
        memset(v,0,sizeof(v));
        for (int i=1;i<=n;i++) cin>>a[i];
        for (int x,i=1;i<=n;i++)
        {
            cin>>x;
            v[x]++;
        }
        s.clear();
        for (int i=0;i<n;i++) if (v[i]) s.insert(point(i,v[i]));
        set<point>::iterator it;
        for (int i=1;i<=n;i++)
        {
            it=s.lower_bound(point(n-a[i],0));
            if (it==s.end()) it=s.begin();
            cout<<(a[i]+it->x)%n;
            if (i==n) cout<<endl;
            else cout<<" ";

            point p = point(it->x, it->num-1);
            s.erase(it);
            if (p.num!=0) s.insert(p);
        }
    }
    return 0;
}
