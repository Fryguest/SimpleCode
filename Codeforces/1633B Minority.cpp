#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=b=0;
        for(int i=0;i<s.length();i++)
        {
            a+=(s[i]=='0');
            b+=(s[i]=='1');
        }
        if (a<b)cout<<a<<endl;
        else if (a>b) cout<<b<<endl;
        else cout<<a-1<<endl;
    }
    return 0;
}
