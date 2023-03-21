#include<bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
    {
        if (a[i]>a[i-1])
        {
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
