#include<bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            for(int j=i+1;j<s.length();j++)
            {
                if (s[j]==s[i]) s[j]='0'+(i&1);
            }
            s[i]='0'+(i&1);
        }
    }
    for(int i=1;i<s.length();i++)
    {
        if (s[i]==s[i-1]) return false;
    }
    return true;
}
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if (solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
