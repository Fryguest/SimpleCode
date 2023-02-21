#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if (n%2==1&&k%2==0)cout<<"NO"<<endl;
        else if (n%2==k%2)
        {
            if (n<k) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<1<<" "; cout<<n-k+1<<endl;
            }
        }
        else if (n%2==0&&k%2==1)
        {
            if (n<k*2) cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)cout<<2<<" "; cout<<n-2*k+2<<endl;
            }
        }
    }
    return 0;
}