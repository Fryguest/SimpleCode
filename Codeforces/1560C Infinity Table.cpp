#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        n=sqrt(k);
        if (n*n==k) cout<<n<<" 1"<<endl;
        else
        {
            k-=n*n;
            n++;
            if(k<n)
            {
                cout<<k<<" "<<n<<endl;
            }
            else
            {
                cout<<n<<" "<<n-(k-n)<<endl;
            }


        }

    }
    return 0;
}
