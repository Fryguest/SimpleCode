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
        if (a<b and b<c) cout<<"STAIR"<<endl;
        else if (a<b and b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}
