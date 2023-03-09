#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
    int ans=0;
    int l=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='R')
        {
            int d=i+1;
            ans=max(d-l,ans);
            l=d;
        }
    }
    return max((int)s.length()+1-l,ans);
}
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<solve(s)<<endl;
    }
    return 0;
}
