#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int n,s,m;
    int l,r;
    bool ans;
    vector<int>v;
    while(t--)
    {
        v.clear();
        scanf("%d%d%d",&n,&s,&m);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&l,&r);
            v.push_back(l);
            v.push_back(r);
        }
        v.push_back(0);
        v.push_back(m);
        sort(v.begin(), v.end());
        ans=false;
        for(int i=0;i<v.size();i+=2)
        {
            if (v[i+1]-v[i]>=s) ans=true;
        }
        if (ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
