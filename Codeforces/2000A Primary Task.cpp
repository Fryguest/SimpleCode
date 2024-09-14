#include <bits/stdc++.h>
using namespace std;
bool cal(const string& s)
{
    if (s.length()<3) return false;
    if (s[0]!='1'||s[1]!='0') return false;
    if (s[2]=='0') return false;
    if (s.length()==3&&s[2]=='1') return false;
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
        if (cal(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
