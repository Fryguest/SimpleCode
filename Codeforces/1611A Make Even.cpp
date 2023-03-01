#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
    if (s[s.length()-1]%2==0) return 0;
    if (s[0]%2==0) return 1;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]%2==0) return 2;
    }
    return -1;
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
