#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n;y=10*n;
        if (x/11*111>=y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
