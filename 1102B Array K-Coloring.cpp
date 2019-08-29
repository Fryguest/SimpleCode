#include <bits/stdc++.h>
using namespace std;
const int N=5005;
struct point
{
    int index;
    int x;
    int result;
}p[N];
int main()
{
    int n,k;
    while (~scanf("%d%d",&n,&k))
    {
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&p[i].x);
            p[i].index=i;
        }

        if (n<k) {printf("NO\n");continue;}
        sort(p+1,p+n+1, [](point a, point b) {return a.x<b.x;});
        int num=0;
        bool ans=true;
        for (int i=1;i<=n;i++)
        {
            if (i==1||p[i].x!=p[i-1].x)
            {
                num=1;
            }
            else
            {
                num++;
                if (num>k)
                {
                    ans=false;
                    break;
                }
            }
        }
        if (!ans) {printf("NO\n");continue;}
        for (int i=1;i<=k;i++) {p[i].result=i;}
        for (int i=k+1;i<=n;i++)
        {
            if (p[i].x!=p[i-1].x)
            {
                p[i].result=1;
            }
            else
            {
                p[i].result=(p[i-1].result%k)+1;
            }
        }
        sort(p+1,p+n+1, [](point a, point b) {return a.index<b.index;});
        printf("YES\n");
        for (int i=1;i<=n;i++)
        {
            printf("%d%c", p[i].result, i==n? '\n':' ');
        }
    }
    return 0;
}
