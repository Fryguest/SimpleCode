#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if (a-1 < abs(b-c)+c-1) printf("1\n");
        else if (a-1 > abs(b-c)+c-1) printf("2\n");
        else printf("3\n");
    }
    return 0;
}