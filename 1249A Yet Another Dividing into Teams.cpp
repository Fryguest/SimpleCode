#include <bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int num=0;
        for (int i=2;i<=n;i++) if (a[i]-a[i-1]==1) num++;
        if (num) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
