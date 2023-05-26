#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans;
    string cons="codeforces",s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        ans=0;
        for(int i=0;i<10;i++) if (s[i]!=cons[i]) ans++;
        cout<<ans<<endl;
    }
    return 0;
}
