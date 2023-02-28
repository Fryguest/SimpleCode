#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if (n==1||(n==2&&s[0]!=s[1]))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
