#include<bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    bool r=false,g=false,b=false;
    for(int i=0;i<6;i++)
    {
        if (s[i]=='r') r=true;
        if (s[i]=='g') g=true;
        if (s[i]=='b') b=true;
        if (s[i]=='R' && !r) return false;
        if (s[i]=='G' && !g) return false;
        if (s[i]=='B' && !b) return false;
    }
    return true;
}
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
