#include<bits/stdc++.h>
using namespace std;
int cal(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if (n%i==0) return i;
    }
    return n;
}
int main()
{
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int x=cal(n);
        k--;
        n+=x+k*2;
        cout<<n<<endl;
    }
    return 0;
}
