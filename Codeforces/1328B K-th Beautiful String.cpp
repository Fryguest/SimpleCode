#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=n;i>=1;i--)
        {
            if (k>n-i) k-=n-i;
            else
            {
                a=i;
                b=n-k+1;
                break;
            }
        }
        for(int i=1;i<a;i++) cout<<"a";
        cout<<"b";
        for(int i=a+1;i<b;i++) cout<<"a";
        cout<<"b";
        for(int i=b+1;i<=n;i++) cout<<"a";
        cout<<endl;
    }
    return 0;
}
