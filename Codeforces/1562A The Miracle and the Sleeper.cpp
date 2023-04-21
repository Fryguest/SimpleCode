#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if (2*l>r) cout<<r-l<<endl;
        else cout<<(r+1)/2-1<<endl;
    }
    return 0;
}
