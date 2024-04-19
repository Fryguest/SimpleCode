#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if (c%2) a++;
        if (a>b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
