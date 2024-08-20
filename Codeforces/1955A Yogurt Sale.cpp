#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&a,&b);
        if (b>=2*a) printf("%d\n",n*a);
        else printf("%d\n",n/2*b+n%2*a);
    }
    return 0;
}
