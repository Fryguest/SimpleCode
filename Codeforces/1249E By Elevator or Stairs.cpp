#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],b[N];
int s[N][2];
int min(int a,int b,int c,int d)
{
    return min(min(a,b),min(c,d));
}
int main()
{
    int n,c;
    while (~scanf("%d%d",&n,&c))
    {
        for (int i=2;i<=n;i++) scanf("%d",&a[i]);
        for (int i=2;i<=n;i++) scanf("%d",&b[i]);
        s[1][0]=0;
        s[1][1]=c;
        for (int i=2;i<=n;i++)
        {
            s[i][0]=min(s[i-1][0]+a[i], s[i-1][0]+c+b[i], s[i-1][1]+b[i], s[i-1][1]+a[i]);
            s[i][1]=min(s[i-1][0]+c+b[i], s[i-1][0]+c+a[i],s[i-1][1]+b[i], s[i-1][1]+a[i]+c);
        }
        for (int i=1;i<=n;i++)
        {
            printf("%d%c",min(s[i][0],s[i][1]), i==n?'\n':' ');
        }
    }
    return 0;
}
