#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int num=0,ans=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='x') num++;
        else num=0;
        if (num>2) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
