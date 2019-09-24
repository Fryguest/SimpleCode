#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct point
{
    int x;
    int index;
}p[N];
int a[N];
int ans[N];
int main()
{
    int n;
    while(cin>>n)
    {
        for (int i=1;i<=n;i++) cin>>a[i];
        for (int x,i=1;i<=n;i++) {cin>>x; p[i].index=i; p[i].x=x;}
        sort(a+1,a+n+1,[](int a, int b){return a>b;});
        sort(p+1,p+n+1,[](point a, point b){return a.x<b.x;});
        for (int i=1;i<=n;i++)
        {
            ans[p[i].index] = a[i];
        }
        for (int i=1;i<=n;i++) cout<<ans[i]<<(i==n?"\n":" ");
    }

    return 0;
}
