#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        ans="";
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            while(s[++i]!=c){}
            ans+=c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
