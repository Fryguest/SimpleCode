#include<bits/stdc++.h>
using namespace std;
int a[]={1,10,100,1000,10000,
        100000,1000000,10000000,100000000,1000000000};
int solve(int n)
{
    for(int i=9;i>=0;i--) if (a[i]<=n) return n-a[i];
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}