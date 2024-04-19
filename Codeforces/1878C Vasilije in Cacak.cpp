#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        if (((1+k)*k/2)>x) cout<<"NO\n";
        else if (((n+n-k+1)*k/2)<x) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
