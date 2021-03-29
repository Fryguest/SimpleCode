#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    char c;
    a=b=0;
    for (int i=1;i<=n;i++)
    {
        scanf(" %c", &c);
        if (c == 'L') a++;
        else b++;
    }
    printf("%d\n",a+b+1);
    return 0;
}
