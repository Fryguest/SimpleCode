#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,zero,ne;
    long long ans;
    cin>>n;
    ans=zero=ne=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if (x>0) ans+=x-1;
        else if (x<0)
        {
            ans+=-x-1;
            ne++;
        }
        else zero++;
    }
    if ((ne&1)&&zero==0) ans+=2;
    else ans+=zero;
    cout<<ans<<endl;

    return 0;
}
