#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n%3) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
