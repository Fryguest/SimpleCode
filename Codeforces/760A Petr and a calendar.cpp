#include <bits/stdc++.h>
using namespace std;
int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int m,d;
    while(cin>>m>>d)
    {
        int num=mon[m];
        num-=8-d;
        int ans=1;
        ans+=num/7;
        if (num%7) ans++;
        cout<<ans<<endl;

    }
    return 0;
}
