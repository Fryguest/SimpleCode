#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N],b[N];

int main()
{
    int t;
    int n,m,k,ans;
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        ans=0;
        int r=m-1;
        for(int i=0;i<n;i++)
        {
            while(r>=0&&a[i]+b[r]>k) r--;
            ans+=r+1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
