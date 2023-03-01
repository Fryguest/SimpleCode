#include<bits/stdc++.h>
using namespace std;
string ans="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
int solve(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if (s[i]!=ans[i]) return i;
    }
    return s.length();
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
