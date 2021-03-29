#include <bits/stdc++.h>
using namespace std;
const int N=55;
int a[N];
int main()
{
    int n,k;
    while (cin>>n>>k)
    {
        for (int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1,[](int a,int b){return a>b;});
        if(k>n)cout<<-1<<endl;
        else if ((k>1&&a[k-1]==a[k]) || (k<n&&a[k+1]==a[k])) cout<<-1<<endl;
        else cout<<a[k]<<" "<<a[k]<<endl;
    }
    return 0;
}
