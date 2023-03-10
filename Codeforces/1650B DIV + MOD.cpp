#include<bits/stdc++.h>
using namespace std;
int a;
int f(int x)
{
    return x/a+x%a;
}
int main()
{
    int t,l,r,x;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a;
        x=r/a*a;
        if (x<=l) cout<<f(r)<<endl;
        else cout<<max(f(r),f(x-1))<<endl;
    }
    return 0;
}
