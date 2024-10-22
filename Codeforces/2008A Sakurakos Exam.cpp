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
        if(a%2)printf("NO\n");
        else if (b%2==0) printf("YES\n");
        else if (a>=2) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
