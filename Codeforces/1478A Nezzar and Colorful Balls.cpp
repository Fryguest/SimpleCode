#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n,a[N];
int solve()
{
    int ans=1;
    int num=1;
    for(int i=2;i<=n;i++)
    {
        if (a[i]==a[i-1])num++;
        else num=1;
        ans=max(ans,num);
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
        cout<<solve()<<endl;
    }
    return 0;
}
