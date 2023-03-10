#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {
        map<char,int>m;
        for(int i=1;i<=4;i++)
        {
            cin>>c;
            m[c]=1;
        }
        cout<<m.size()-1<<endl;
    }
    return 0;
}
