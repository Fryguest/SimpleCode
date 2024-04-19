#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int h,m;
    bool f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&h,&m);
        f=(h>=12);
        if (h==0) h=12;
        else if (h>12) h-=12;
        printf("%02d:%02d %cM\n", h, m, f?'P':'A');

    }
    return 0;
}
