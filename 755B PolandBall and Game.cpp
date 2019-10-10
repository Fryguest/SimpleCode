#include <bits/stdc++.h>
using namespace std;
set<string>s1;
int main()
{
    int n,m,num;
    string s;
    while(cin>>n>>m)
    {
        s1.clear();
        num=0;
        for (int i=1;i<=n;i++)
        {
            cin>>s;
            s1.insert(s);
        }
        for (int i=1;i<=m;i++)
        {
            cin>>s;
            if (s1.find(s) != s1.end()) num++;
        }
        n-=num;
        m-=num;
        if (num%2) n++;
        if (n>m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
