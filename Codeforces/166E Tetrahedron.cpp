#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
long long a[2][4];
int main()
{
    int n,x,y;
    while (cin>>n)
    {
        a[0][0]=1; a[0][1]=0; a[0][2]=0; a[0][3]=0;
        for (int i=1;i<=n;i++)
        {
            x=i%2;
            y=1-i%2;
            a[x][0]=(a[y][1]+a[y][2]+a[y][3])%mod;
            a[x][1]=(a[y][0]+a[y][2]+a[y][3])%mod;
            a[x][2]=(a[y][0]+a[y][1]+a[y][3])%mod;
            a[x][3]=(a[y][0]+a[y][1]+a[y][2])%mod;
        }
        cout<<a[n%2][0]<<endl;
    }
    return 0;
}
