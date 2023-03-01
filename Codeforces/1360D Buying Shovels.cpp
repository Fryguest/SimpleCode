#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k)
{
    if(k>=n)return 1;
    int ans=n;
    for(int i=2;i<=k&&i*i<=n;i++)
    {
        if (n%i==0)
        {
            if (n/i<=k) ans=min(ans,i);
            else ans=min(ans,n/i);
        }
    }
    return ans;
}
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
    return 0;
}
