#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<9;i++)
        {
            cin>>s;
            for(int j=0;j<9;j++)
            {
                if(s[j]=='1') s[j]='2';
            }
            cout<<s<<endl;
        }


    }
    return 0;
}
