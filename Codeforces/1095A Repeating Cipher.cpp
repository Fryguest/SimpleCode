#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int x=0;
    string ans;
    for(int i=1;i<=10;i++)
    {
        if (x>=s.length()) break;
        ans+=s[x];
        x+=i;
    }
    cout<<ans<<endl;
    return 0;
}
