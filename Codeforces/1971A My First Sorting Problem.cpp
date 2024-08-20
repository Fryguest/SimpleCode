#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d %d\n",min(a,b),max(a,b));
    }
    return 0;
}
