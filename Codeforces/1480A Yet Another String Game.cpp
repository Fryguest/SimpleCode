#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if (i%2)
            {
                if (s[i]=='z')s[i]='y';
                else s[i]='z';
            }
            else
            {
                if (s[i]=='a')s[i]='b';
                else s[i]='a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
