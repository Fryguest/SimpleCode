#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[3];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<a[2]-a[0]<<endl;
    }
    return 0;
}
