#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    int a[256];
    bool f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            for(int j=0;j<s.length();j++)
            {
                a[s[j]]++;
            }
        }
        f=true;
        for(int i='a';i<='z';i++)
        {
            if(a[i]%n){f=false;break;}
        }
        if (f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
