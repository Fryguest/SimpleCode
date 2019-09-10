#include <bits/stdc++.h>
using namespace std;
long long n, ans;
void dfs(long long x)
{
    if (x>n) return;
    ans++;
    dfs(x*10);
    dfs(x*10+1);
    return;
}
int main()
{
    cin>>n;
    ans=0;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}
