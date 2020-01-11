#include <bits/stdc++.h>
using namespace std;
const int N=3005;
int a[N];
int main()
{
    int n,x;
    cin>>n;
    memset(a,0,sizeof(a));
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]=1;
    }
    for (int i=1;i<=3001;i++)
    {
        if (a[i]==0)
        {
            cout<<i<<endl;
            break;
        }

    }
    return 0;
}
