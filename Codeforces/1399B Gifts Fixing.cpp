#include <bits/stdc++.h>
using namespace std;
int a[55],b[55];
int main()
{
    int t,n,mina,minb;
    long long ans;
    cin>>t;
    while (t--)
    {
        cin>>n;
        mina=minb=1e9+5;
        for (int i=0;i<n;i++){cin>>a[i];mina=min(a[i],mina);}
        for (int i=0;i<n;i++){cin>>b[i];minb=min(b[i],minb);}
        ans=0;
        for (int i=0;i<n;i++)ans+=max(a[i]-mina,b[i]-minb);
        cout<<ans<<endl;


    }
    return 0;
}
