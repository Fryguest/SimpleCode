#include <iostream>
using namespace std;
bool check(int n,int m,int k)
{
    if (n%2==0 and m%2==0)
    {
        if (k%2==0) return true;
        return false;
    }
    if (n%2)
    {
        if (k<m/2) return false;
        k-=m/2;
        if (k%2==0) return true;
        else return false;
    }
    else
    {
        if (k<=n*(m-1)/2 and k%2==0) return true;
        else return false;
    }
}
int main()
{
    int t,n,m,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>m>>k;
        if (check(n,m,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

