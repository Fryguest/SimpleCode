#include <bits/stdc++.h>
using namespace std;
int a[55];
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        bool f=true;
        for (int i=1;i<n;i++) f=f&&(a[i]-a[i-1]<=1);
        if (f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
