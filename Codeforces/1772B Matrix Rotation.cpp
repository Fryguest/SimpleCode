#include<bits/stdc++.h>
using namespace std;
int a[10][10];
bool test()
{
    if(a[1][1]>=a[1][2])return false;
    if(a[2][1]>=a[2][2])return false;
    if(a[1][1]>=a[2][1])return false;
    if(a[1][2]>=a[2][2])return false;
    return true;
}
void rotate()
{
    int temp=a[1][1];
    a[1][1]=a[1][2];
    a[1][2]=a[2][2];
    a[2][2]=a[2][1];
    a[2][1]=temp;
}
bool solve()
{
    for(int i=1;i<=4;i++)
    {
        if (test()) return true;
        rotate();
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a[1][1]>>a[1][2]>>a[2][1]>>a[2][2];
        if (solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
