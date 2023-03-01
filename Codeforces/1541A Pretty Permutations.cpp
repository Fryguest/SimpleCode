#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n&1) cout<<"3 1 2";
        else cout<<"2 1";
        for(int i=n%2+3;i<=n;i+=2)
        {
            cout<<" "<<i+1<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}
