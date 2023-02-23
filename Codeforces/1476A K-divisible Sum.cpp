#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if (n>k)
        {
            if (n%k) cout<<2<<endl;
            else cout<<1<<endl;
        }
        else
        {
            cout<<k/n+(k%n?1:0)<<endl;
        }
    }
    return 0;
}
