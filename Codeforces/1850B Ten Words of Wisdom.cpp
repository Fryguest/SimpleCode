#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int ans,qans;
    int a,b;
    while(t--)
    {
        cin>>n;
        qans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if (a<=10&&b>qans)
            {
                ans=i;
                qans=b;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
