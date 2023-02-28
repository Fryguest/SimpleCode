#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    long long x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        x--;
        long long a=x/n;
        long long b=x%n;
        cout<<b*m+a+1<<endl;
    }
    return 0;
}
