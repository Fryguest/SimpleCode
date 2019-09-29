#include <bits/stdc++.h>
using namespace std;
int cal(long long x)
{
    int ans=0;
    while (x) 
    {
        ans+=x%10;x/=10;
    }
    return ans;
}
int main()
{
    long long n;
    while (cin>>n)
    {
        if (n<10) cout<<n<<endl;
        else
        {
            long long x=1;
            while(x*10-1<=n) x=x*10;
            x--;
            cout<<cal(x)+cal(n-x)<<endl;

        }

    }
    return 0;
}
