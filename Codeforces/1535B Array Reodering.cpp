#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int a[N];
int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[i]%2==0||a[j]%2==0) ans++;
                else if (gcd(a[i],a[j])>1) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
