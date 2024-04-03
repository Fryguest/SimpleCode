#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,k,x;
    bool f;

    cin>>t;
    while(t--)
    {
        f=false;
        cin>>n>>k;
        while(n--) {cin>>x; if (x==k) f=true;}
        if (f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
