#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin>>n)
    {
        int ans=0;
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<i;j++)
            {
                if ((i^j)+j>i && (i^j)<i) ans++;
            }
        }
        cout<<ans/2<<endl;
    }

    return 0;
}
