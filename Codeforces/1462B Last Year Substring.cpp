#include<bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    if (s.length()<4) return false;
    for(int i=0;i<=4;i++)
    {
        if (s.substr(0,i)+s.substr(s.length()-4+i,4-i)=="2020") return true;
    }
    return false;
}
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if (solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
