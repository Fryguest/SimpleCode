#include <bits/stdc++.h>
using namespace std;
long long p[40];
void prepare()
{
    p[0]=1;
    for (int i=1;i<40;i++) p[i]=p[i-1]*3;
}
int main()
{
    prepare();
    int t;
    cin>>t;
    long long n,ans;
    while (t--)
    {
        cin>>n;
        ans=0;
        for (int i=0;i<40;i++) ans+=p[i];
        for (int i=39;i>=0;i--)
        {
            if (ans-p[i]>=n) ans-=p[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
