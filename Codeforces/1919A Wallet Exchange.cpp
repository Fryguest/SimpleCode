#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if ((n+m)&1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
