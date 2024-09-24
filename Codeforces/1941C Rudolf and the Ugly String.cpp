#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        ans=0;
        for(int i=0;i+2<s.length();i++)
        {
            if (s[i]=='p' and s[i+1]=='i' and s[i+2]=='e')
            {
                ans++;
                i+=2;
            }
            else if (s[i]=='m' and s[i+1]=='a' and s[i+2]=='p')
            {
                ans++;
                if (i+4<s.length() and s[i+3] =='i' and s[i+4]=='e') i+=4;
                else i+=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
