#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n/4+(n%4?1:0)<<endl;
    }
    return 0;
}
