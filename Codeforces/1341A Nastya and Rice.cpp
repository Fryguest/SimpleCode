#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        if ((a+b)*n>=c-d&&(a-b)*n<=c+d) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
