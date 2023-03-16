#include<bits/stdc++.h>
using namespace std;
const int N=55;
int n;
int a[N];
int cal(int x)
{
    int l=1,r=n;
    int num=0;
    while(l<r)
    {
        if (a[l]+a[r]>x) r--;
        else if (a[l]+a[r]<x) l++;
        else
        {
            l++;r--;
            num++;
        }
    }
    return num;
}
int solve()
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            ans=max(ans,cal(a[i]+a[j]));
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        cout<<solve()<<endl;
    }
    return 0;
}
