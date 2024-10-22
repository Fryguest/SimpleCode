#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,k,x,g,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        ans=g=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>=k)g+=x;
            if(x==0&&g)
            {
                g--;
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
