#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        for(int i=1;i<=8;i++)
        {
            cin>>s;
            for(int j=0;j<8;j++)
            {
                if (s[j]!='.')
                {
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
