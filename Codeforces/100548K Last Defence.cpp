#include <iostream>
#include <stdio.h>
#include <cmath>
#include <set>
#include <string.h>
using namespace std;
long long ans;
long long gcd(long long n,long long m)
{
    if (!m) return n;
    ans+=n/m;
    return gcd(m,n%m);
}
int main()
{
    int t;
    long long n,m;;
    scanf("%d",&t);
    for (int cas=1;cas<=t;cas++)
    {
        cin>>n>>m;
        if (!n&&!m) ans=1;
        else if (!n||!m) ans=2;
        else
        {
            ans=1;
            gcd(n,m);
        }
        printf("Case #%d: %lld\n",cas,ans);
    }
    return 0;
}
