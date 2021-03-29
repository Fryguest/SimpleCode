#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while (~scanf("%d%d%d", &a,&b,&c))
    {
        if (c==0 && a==b) printf("0\n");
        else
        {
            if ((a-b+c) * (a-b-c) <=0) printf("?\n");
            else if (a-b < 0) printf("-\n");
            else printf("+\n");
        }
    }
    return 0;
}
