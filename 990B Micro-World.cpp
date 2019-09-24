#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
int find(int x)
{
    int l=0, r=n-1;
    int ans;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if (a[mid]<=x)
        {
            ans=a[mid];
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}
int main()
{
    int k,ans;
    while (cin>>n>>k)
    {
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ans=0;
        for (int i=0;i<n;i++)
        {
            int x=find(a[i]+k);
            if (x==a[i]) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
