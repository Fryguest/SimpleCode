#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int x=1;
    while(x*2<=n) x*=2;
    return x-1;
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