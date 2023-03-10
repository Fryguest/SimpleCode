#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,num;
    cin>>t;
    while(t--)
    {
        num=0;
        for(int i=1;i<=4;i++)
        {
            cin>>x;
            num+=x;
        }
        if(num==0) cout<<0<<endl;
        else if (num==4) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
