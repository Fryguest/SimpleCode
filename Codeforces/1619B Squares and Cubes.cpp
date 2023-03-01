#include<bits/stdc++.h>
using namespace std;
const int maxn=1e9;
set<int>s;
void pre()
{
    int x=1;
    for(;;)
    {
        if (x*x>maxn) break;
        s.insert(x*x);
        x++;
    }
    x=1;
    for(;;)
    {
        if (x*x*x>maxn) break;
        s.insert(x*x*x);
        x++;
    }
}
int solve(int n)
{
    int ans=0;
    for(auto it=s.begin();it!=s.end();it++)
    {
        if (*it>n) return ans;
        ans++;
    }
    return ans;
}
int main()
{
    pre();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}
