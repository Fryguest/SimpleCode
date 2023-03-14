#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int x=a^b;
        int ans=0;
        for(int i=0;i<31;i++)
        {
            if (x&(1<<i)) ans+=(1<<i);
        }
        cout<<ans<<endl;

    }
    return 0;
}
