#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m,a[7],ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s;
        memset(a,0,sizeof(a));
        ans=0;
        for (int i=0;i<s.length();i++) a[s[i]-'A']++;
        for (int i=0;i<7;i++) ans+=(a[i]<m?m-a[i]:0);
        cout<<ans<<endl;
    }
    return 0;
}
