#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x,d;
    Point(int _x, int _d) {x=_x; d=_d;}
    friend bool operator<(const Point& a, const Point& b) {return a.x>b.x;}
};
priority_queue<Point>q;
int main()
{
    int n,m,k,x;
    scanf("%d%d%d", &n, &m, &k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &x);
        q.push(Point(x, i));
        if (q.size()>m*k) q.pop();
    }
    long long sum=0;
    vector<int> v;
    while (!q.empty())
    { 
        sum+=q.top().x;
        v.emplace_back(q.top().d);
        q.pop();
    }
    sort(v.begin(), v.end());
    v.pop_back();
    printf("%lld\n", sum);
    for (int i=m-1; i<v.size(); i+=m) printf("%d%c", v[i], i+m>=v.size()?'\n':' ');
    return 0;
}