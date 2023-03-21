#include<bits/stdc++.h>
using namespace std;
int solve(int a, int b)
{
    if (b%a) return -1;
    int x=b/a;
    int ans=0;
    while(x%2==0)
    {
        ans++;
        x/=2;
    }
    while(x%3==0)
    {
        ans++;
        x/=3;
    }
    if (x==1) return ans;
    else return -1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<solve(a,b)<<endl;
    return 0;
}
