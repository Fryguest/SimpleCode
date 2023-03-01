#include<bits/stdc++.h>
using namespace std;
int a[4];
bool solve()
{
    sort(a+1,a+4);
    if (a[1]+a[2]==a[3]) return true;
    if (a[1]==a[2]&&a[3]%2==0) return true;
    if (a[2]==a[3]&&a[1]%2==0) return true;
    return false;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>a[1]>>a[2]>>a[3];
        if (solve())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
