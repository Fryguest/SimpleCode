#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N];
int main()
{
    int t,n,x,ans,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if (sum%x)cout<<n<<endl;
        else
        {
            ans=-1;
            for(int i=1;i<=n;i++)
            {
                if(a[i]%x)
                {
                    ans=max(ans,n-i);
                    break;
                }
            }
            for(int i=n;i>=1;i--)
            {
                if(a[i]%x)
                {
                    ans=max(ans,i-1);
                    break;
                }
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}
