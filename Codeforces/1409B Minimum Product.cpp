#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,n;
long long min(long long a, long long b)
{
    return a<b?a:b;
}
long long solve()
{
    if (a+b-n<=x+y) return x*y;
    long long sum=a+b-n;
    long long resulta,resultb;
    if(sum-x<=b) resulta=(sum-x)*x;
    else resulta=(sum-b)*b;
    if(sum-y<=a) resultb=(sum-y)*y;
    else resultb=(sum-a)*a;
    return min(resulta, resultb);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        cout<<solve()<<endl;
    }
    return 0;
}
