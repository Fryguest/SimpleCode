#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin>>n)
    {
        string ans="EASY";
        for (int x,i=1;i<=n;i++) 
        {
            cin>>x;
            if (x==1) ans="HARD";
        }
        cout<<ans<<endl;
    }
    return 0;
}
