#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=0,num=0;
        bool f=false;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if (x)
            {
                if (f) ans+=num;
                f=true;
                num=0;
            }
            else
            {
                num++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
