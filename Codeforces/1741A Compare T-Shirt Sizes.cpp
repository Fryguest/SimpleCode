#include<bits/stdc++.h>
using namespace std;
string solve(string s1,string s2)
{
    if (s1==s2) return "=";
    if (s1=="M")
    {
        if (s2[s2.length()-1]=='L') return "<";
        return ">";
    }
    if (s2=="M")
    {
        if (s1[s1.length()-1]=='L') return ">";
        return "<";
    }

    if (s1[s1.length()-1]=='L')
    {
        if (s2[s2.length()-1]=='S') return ">";
        if (s2.length()<s1.length()) return ">";
        return "<";
    }

    if (s1[s1.length()-1]=='S')
    {
        if (s2[s2.length()-1]=='L') return "<";
        if (s2.length()<s1.length()) return "<";
        return ">";
    }
}
int main()
{
    int t;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        cout<<solve(s1,s2)<<endl;
    }
    return 0;
}
