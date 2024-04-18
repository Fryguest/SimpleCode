#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c;
    int d;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        for (char x='a';x<='h';x++)
        {
            if (x!=c) cout<<x<<d<<endl;
        }
        for (int i=1;i<=8;i++)
        {
            if (i!=d) cout<<c<<i<<endl;
        }
    }
    return 0;
}
