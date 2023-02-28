#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    int a[4],s[4];
    cin>>t;
    while(t--)
    {
        memset(s,0,sizeof(s));
        cin>>x;
        s[x]=1;
        cin>>a[1]>>a[2]>>a[3];
        for (int i=1;i<=3;i++)
        {
            for (int j=1;j<=3;j++)
            {
                if (s[j]) s[a[j]]=1;
            }
        }
        if (s[1]&&s[2]&&s[3])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
