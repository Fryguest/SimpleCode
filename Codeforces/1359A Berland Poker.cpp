nclude<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        c=n/k;
        if (m<=c)cout<<m<<endl;
        else cout<<c-(m-c+k-2)/(k-1)<<endl;
    }
    return 0;
}
