#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N], b[N];
unordered_map<int, vector<int>>m;
int main()
{
    int t,n,k;
    scanf("%d", &t);
    while (t--)
    {
        int sum=0;
        memset(b,0,sizeof(b));
        m.clear();

        scanf("%d%d", &n,&k);
        for (int i=0;i<n;i++) scanf("%d", &a[i]);
        for (int i=0;i<n;i++)
        {
            if (m[a[i]].size()<k)
            {
                m[a[i]].push_back(i);
                sum++;
            }
        }
        sum=sum/k*k;
        for (auto it : m)
        {
            for (auto o : it.second)
            {
                b[o]=sum%k+1;
                sum--;
                if(sum==0)break;
            }
            if(sum==0)break;
        }
        for (int i=0;i<n;i++) printf("%d%c", b[i], i==n-1?'\n':' ');
    }
    return 0;
}
