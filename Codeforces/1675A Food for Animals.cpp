#include<bits/stdc++.h>
using namespace std;
bool solve(int a,int b,int c)
{
    if (a<=0) a=0;
    if (b<=0) b=0;
    return a+b<=c;
}
int main()
{
    int t;
    int a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        if(solve(x-a, y-b, c))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
