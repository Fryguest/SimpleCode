#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=0;
        while(n--)
        {
            cin>>x;
            if(x&1) a++;
            else b++;
        }
        cout<<min(a,b)<<endl;
    }
    return 0;
}
