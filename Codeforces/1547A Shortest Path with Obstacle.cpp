#include<bits/stdc++.h>
using namespace std;
bool in(int a,int b,int c)
{
    if (a<=c&&c<=b) return true;
    if (a>=c&&c>=b) return true;
    return false;
}
int solve(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if (x1==x2&&x1==x3&&in(y1,y2,y3)) return abs(y1-y2)+2;
    if (y1==y2&&y1==y3&&in(x1,x2,x3)) return abs(x1-x2)+2;
    return abs(x1-x2)+abs(y1-y2);
}
int main()
{
    int t;
    int x1,y1,x2,y2,x3,y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        cout<<solve(x1,y1,x2,y2,x3,y3)<<endl;
    }
    return 0;
}
