#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<b[0]<<a[1]<<a[2]<<" ";
        cout<<a[0]<<b[1]<<b[2]<<endl;
    }
    return 0;
}
