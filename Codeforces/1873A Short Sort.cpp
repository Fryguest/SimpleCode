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
        if (s=="abc"||s=="bac"||s=="cba"||s=="acb")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
