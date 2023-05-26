#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
bool solve(int n,int m)
{
    if (n==m) return true;
    if (n%3) return false;
    if (n<m) return false;
    return solve(n/3*2,m) or solve(n/3,m);
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if (solve(n,m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
