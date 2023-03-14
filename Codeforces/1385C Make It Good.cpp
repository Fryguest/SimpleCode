#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
int solve()
{
    bool f=false;
    for(int i=n;i>=2;i--)
    {
        if (!f)
        {
            if (a[i-1]<a[i]) f=true;
        }
        else if (f)
        {
            if (a[i-1]>a[i]) return i-1;
        }
    }
    return 0;
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
