#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n==1) cout<<2<<endl;
        else cout<<(n%3?n/3+1:n/3)<<endl;
    }
    return 0;
}
