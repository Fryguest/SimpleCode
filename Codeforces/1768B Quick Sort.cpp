#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int num=1;

        for(int i=1;i<=n;i++)
        {
            scanf("%d", &x);
            if (x==num) num++;
        }
        if (num>n) printf("0\n");
        else printf("%d\n", (n-num)/k+1);
    }
    return 0;
}
