#include<bits/stdc++.h>
using namespace std;
int solve(string& s)
{
    int ans=0;
    int x=0;
    set<char>m;
    while(x<s.length())
    {
        if (m.find(s[x])==m.end())
        {
            if(m.size()==3)
            {
                ans++;
                m.clear();
            }
            m.insert(s[x]);
        }
        x++;
    }
    return ans+1;
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
