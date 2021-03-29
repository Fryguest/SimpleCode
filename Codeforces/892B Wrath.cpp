#include <bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N];
int main()
{
    int n,num,ans;
    int x;
    while (cin>>n)
    {
        memset(a,0,sizeof(a));
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            a[i]--;
            a[i-x>=0?i-x:0]++;
        }
        num=a[0];
        ans=0;
        for (int i=1;i<=n;i++)
        {
            num+=a[i];
            if (num==0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
