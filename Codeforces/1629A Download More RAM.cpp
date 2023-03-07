#include<bits/stdc++.h>
using namespace std;
const int N=105;
pair<int,int>a[N];
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i].first;
        for(int i=1;i<=n;i++) cin>>a[i].second;
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            if (k>=a[i].first) k+=a[i].second;
        }
        cout<<k<<endl;
    }
    return 0;
}
