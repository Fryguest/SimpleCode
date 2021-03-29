#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int n,a,b,x;
    bool flag;
    while (t--)
    {
        scanf("%d%d%d",&n,&a,&b);
        flag=false;
        for (int i=1;i<=a;i++)
        {
            scanf("%d",&x);
            if (x==n) flag=true;
        }
        for (int i=1;i<=b;i++)
        {
            scanf("%d", &x);
        }
        if (flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
