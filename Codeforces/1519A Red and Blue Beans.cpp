#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],s[N];
int main()
{
    int t,r,b,d;
    cin>>t;
    while(t--)
    {
        cin>>r>>b>>d;
        if (r>b) swap(r,b);
        if ((b+d)/(1+d)>r) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
