#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a>>b>>c;
        if (a==b) cout<<c<<endl;
        else if (a==c) cout<<b<<endl;
        else cout<<a<<endl;
    }
    return 0;
}
