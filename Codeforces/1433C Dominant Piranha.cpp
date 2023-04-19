#include<bits/stdc++.h>
using namespace std;
const int N=3e5+5;
int n,a[N];
int solve()
{
    int maxn=0;
    for(int i=1;i<=n;i++)maxn=max(maxn,a[i]);
    if (a[1]==maxn&&a[1]>a[2]) return 1;
    if (a[n]==maxn&&a[n]>a[n-1]) return n;
    for(int i=2;i<=n-1;i++)
    {
        if (a[i]==maxn&&(a[i]>a[i-1]||a[i]>a[i+1])) return i;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        cout<<solve()<<endl;
    }
    return 0;
}
