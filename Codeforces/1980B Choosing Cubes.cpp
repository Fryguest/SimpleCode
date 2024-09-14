#include <bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
    int t;
    int n,f,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>f>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        int x=a[f];
        sort(a+1,a+n+1);
        int d=n-k+1;
        if (a[d]<x) cout<<"YES"<<endl;
        else if (a[d]>x) cout<<"NO"<<endl;
        else if (a[d-1]==x) cout<<"MAYBE"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}
