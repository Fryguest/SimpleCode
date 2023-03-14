#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
int main()
{
    int n,k;
    cin>>n>>k;
    memset(a,-1,sizeof(a));
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    if (k==0)
    {
        if (a[1]>1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    else if (a[k]==a[k+1]) cout<<-1<<endl;
    else cout<<a[k]<<endl;
    return 0;
}
