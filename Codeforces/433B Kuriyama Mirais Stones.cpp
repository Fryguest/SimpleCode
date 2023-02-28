#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int a[N],b[N];
long long suma[N],sumb[N];
int main()
{
    int n,m;
    int t,l,r;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    suma[0]=0;
    sumb[0]=0;
    for(int i=1;i<=n;i++)
    {
        suma[i]=a[i]+suma[i-1];
        sumb[i]=b[i]+sumb[i-1];
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>t>>l>>r;
        if (t==1) cout<<suma[r]-suma[l-1]<<endl;
        else cout<<sumb[r]-sumb[l-1]<<endl;

    }
    return 0;
}
