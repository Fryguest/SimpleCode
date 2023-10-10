#include<bits/stdc++.h>
using namespace std;
const int N=20;
int a[N];
int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]<a[x]) x=i;
        }
        a[x]++;
        ans=1;
        for(int i=0;i<n;i++) ans*=a[i];
        cout<<ans<<endl;
    }
    return 0;
}
