#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
int main()
{
    int n,x;
    scanf("%d", &n);
    for (int i=1;i<=n;i++)v[i].clear();
    for (int i=1;i<=2*n;i++)
    {
        scanf("%d", &x);
        v[x].push_back(i);
    }
    int a=1,b=1;
    long long ans=0;
    for (int i=1;i<=n;i++)
    {
        ans+=min(abs(v[i][0]-a)+abs(v[i][1]-b),abs(v[i][1]-a)+abs(v[i][0]-b));
        a=v[i][0];
        b=v[i][1];
    }
    cout<<ans<<endl;
    return 0;
}
