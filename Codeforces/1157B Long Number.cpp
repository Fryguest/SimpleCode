#include <bits/stdc++.h>
using namespace std;
string s;
int f[10];
int main()
{
    int n;
    while(cin>>n)
    {
        cin>>s;
        for (int i=1;i<=9;i++) cin>>f[i];
        for (int i=0;i<n;i++)
        {
            if (f[s[i]-'0']>s[i]-'0')
            {
                for (int j=i;j<n;j++)
                {
                    if (f[s[j]-'0']<s[j]-'0') break;
                    s[j] = f[s[j]-'0'] + '0';
                }
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
