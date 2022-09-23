#include <bits/stdc++.h>
using namespace std;
bool check(int x, int y, int z, int a, int b, int c)
{
    if(x>a) return false;
    a-=x;
    b+=a;
    if (y>b) return false;
    b-=y;
    c+=b;
    if (z>c) return false;
    return true;
}
int main()
{
    int x,y,z, a,b,c;
    cin>>x>>y>>z>>a>>b>>c;

    if (check(x,y,z,a,b,c)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}