#include<bits/stdc++.h>
using namespace std;
pair<string,string> solve(string s)
{
    string a,b;
    bool f=false;
    for(int i=0;i<s.length();i++)
    {
        if (f)
        {
            a+='0';
            b+=s[i];
        }
        else if (s[i]=='2')
        {
            a+='1';
            b+='1';
        }
        else if (s[i]=='1')
        {
            a+='1';
            b+='0';
            f=true;
        }
        else if (s[i]=='0')
        {
            a+='0';
            b+='0';
        }
    }
    return {a,b};
}
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        auto result=solve(s);
        cout<<result.first<<endl<<result.second<<endl;
    }
    return 0;
}
