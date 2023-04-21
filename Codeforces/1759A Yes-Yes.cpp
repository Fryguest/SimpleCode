#include<bits/stdc++.h>
using namespace std;
const string str="Yes";
bool solve(string s)
{
    int d;
    if (s[0]=='Y') d=0;
    else if (s[0]=='e') d=1;
    else if (s[0]=='s') d=2;
    else return false;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]!=str[(d+i)%3]) return false;
    }
    return true;

}
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if (solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
