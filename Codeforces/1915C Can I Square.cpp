#include <bits/stdc++.h>
using namespace std;
double eps = 1e-6;
int main()
{
    int t,n;
    long long x,sum,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++) {cin>>x; sum+=x;}
        k=(sqrt(sum)+eps);
        if (k*k==sum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
