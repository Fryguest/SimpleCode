#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    int a,b,n,s;
    scanf("%d",&q);
    for (int cas=1;cas<=q;cas++)
    {
        scanf("%d%d%d%d",&a,&b,&n,&s);
        int x=s/n;
        if (x>a) x=a;
        if (s-x*n<=b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
