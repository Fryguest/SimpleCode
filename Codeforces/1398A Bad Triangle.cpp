#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int a[N];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if (a[1]+a[2]>a[n]) cout<<-1<<endl;
        else cout<<"1 2 "<<n<<endl;
    }
    return 0;
}
