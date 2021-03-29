#include <bits/stdc++.h>
using namespace std;
bool v[105];
int main()
{
    string s;
    while (cin>>s)
    {
        int ans=0, num=0;
        memset(v,0,sizeof(v));
        for (int i=1;i<s.length();i++)
        {
            if (s[i]=='K' && s[i-1]=='V')
            {
                v[i]=v[i-1]=1;
                ans++;
            }
        }
        for (int i=1;i<s.length();i++)
        {
            if (v[i]||v[i-1]) continue;
            if (s[i]=='K'||s[i-1]=='V') num++;
        }
        if (num) cout<<ans+1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
