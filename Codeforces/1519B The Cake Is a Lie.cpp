#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if (n*m==k+1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
