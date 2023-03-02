#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=c=0;
        for(int i=2;i*i*i<n;i++)
        {
            if (n%i==0)
            {
                int s=n/i;
                for(int j=i+1;j*j<s;j++)
                {
                    if (s%j==0&&s/j!=i)
                    {
                        a=i;b=j;c=s/j;
                        break;
                    }
                }
            }
        }
        if (a!=0) cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
