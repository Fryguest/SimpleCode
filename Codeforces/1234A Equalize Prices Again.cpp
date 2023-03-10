#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        num=0;
        for(int i=1;i<=n;i++){cin>>x;num+=x;}
        cout<<(num+n-1)/n<<endl;
    }
    return 0;
}
