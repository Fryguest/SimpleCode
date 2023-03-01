#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n==1) cout<<"-1"<<endl;
        else
        {
            for(int i=1;i<=n-2;i++) cout<<3;
            cout<<53<<endl;
        }
    }
    return 0;
}
