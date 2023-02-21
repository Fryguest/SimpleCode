#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if ((b-a+b)>0&&(b-a+b)%c==0)cout<<"YES"<<endl;
        else if ((c-a)%2==0&&((c-a)/2+a)%b==0)cout<<"YES"<<endl;
        else if ((b-c+b)>0&&(b-c+b)%a==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}