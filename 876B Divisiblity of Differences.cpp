#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
int main()
{
    int n,k,m,x;
    while (~scanf("%d%d%d",&n,&k,&m))
    {
        for (int i=0;i<m;i++) v[i].clear();
        for (int i=0;i<n;i++)
        {
            scanf("%d",&x);
            v[x%m].push_back(x);
        }
        int ans=-1;
        for (int i=0;i<m;i++)
        {
            if (v[i].size()>=k)
            {
                ans=i;
                break;
            }
        }
        if (ans==-1) printf("No\n");
        else
        {
            printf("Yes\n");
            for (int i=0;i<k;i++)
            {
                printf("%d%c",v[ans][i], i==k-1?'\n':' ');
            }
        }
    }
    return 0;
}
