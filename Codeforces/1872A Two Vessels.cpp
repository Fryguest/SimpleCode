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
        cout<<(abs(a-b)+(2*c-1))/(2*c)<<endl;
    }
    return 0;
}
