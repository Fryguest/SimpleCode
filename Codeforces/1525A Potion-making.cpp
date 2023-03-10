#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if (b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<100/gcd(k,100)<<endl;
    }
    return 0;
}
