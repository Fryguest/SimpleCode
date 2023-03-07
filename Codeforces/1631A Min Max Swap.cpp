#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N],b[N];
int main()
{
    int t,n,maxa,maxb;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        for(int i=1;i<=n;i++)
        {
            if (a[i]>b[i]) swap(a[i],b[i]);
        }
        maxa=maxb=0;
        for(int i=1;i<=n;i++) maxa=max(maxa,a[i]);
        for(int i=1;i<=n;i++) maxb=max(maxb,b[i]);
        cout<<maxa*maxb<<endl;
    }
    return 0;
}
