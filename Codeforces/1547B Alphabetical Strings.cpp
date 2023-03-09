#include<bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    int r=s.length()-1;
    int l=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        char c='a'+i;
        if (s[l]==c) l++;
        else if (s[r]==c) r--;
        else return false;
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
        if(solve(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
