#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<min((a+b)/4,min(a,b))<<endl;
    }
    return 0;
}
