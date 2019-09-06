#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while (cin>>a)
    {
        bool ans=false;
        for (int i=1;i<=5;i++)
        {
            cin>>b;
            if (a[0]==b[0]||a[1]==b[1]) ans=true;
        }
        if (ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
