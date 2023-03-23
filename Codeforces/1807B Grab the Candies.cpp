#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=0;
        while(n--)
        {
            cin>>x;
            if(x&1) a+=x;
            else b+=x;
        }
        if (b>a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
