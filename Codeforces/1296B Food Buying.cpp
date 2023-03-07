#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int ans=0;
    while(n>=10)
    {
        int x=n/10*10;
        ans+=x;
        n=n-x+n/10;
    }
    ans+=n;
    return ans;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
