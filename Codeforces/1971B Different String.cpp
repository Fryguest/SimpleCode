#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if (s.length()<2) cout<<"NO"<<endl;
        else
        {
            for(int i=1;i<s.length();i++)
            {
                if (s[i]!=s[i-1])
                {
                    cout<<"YES"<<endl;
                    for (int j=0;j<i-1;j++) cout<<s[j];
                    cout<<s[i]<<s[i-1];
                    for (int j=i+1;j<s.length();j++) cout<<s[j];
                    cout<<endl;
                    break;
                }
                if (i==s.length()-1)
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
