#include<bits/stdc++.h>
using namespace std;
const int N=505;
int a[N],b[N];
int n;
bool solve()
{
    bool f1=false,f2=false;
    for(int i=1;i<=n;i++)
    {
        if (b[i]) f1=true;
        else f2=true;
    }
    if (f1&&f2) return true;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<a[i-1]) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        if (solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
