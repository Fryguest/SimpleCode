#include<bits/stdc++.h>
using namespace std;
pair<int,int> solve(const string& s)
{
    for(int i=0;i<s.length()-1;i++)
    {
        if (s[i]!=s[i+1])
        {
            return {i+1,i+2};
        }
    }
    return {-1,-1};
}
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        auto result=solve(s);
        cout<<result.first<<" "<<result.second<<endl;
    }
    return 0;
}
