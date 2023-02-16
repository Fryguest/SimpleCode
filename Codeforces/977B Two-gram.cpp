#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    string s,ans;
    map<string, int>m;
    cin>>n>>s;
    for(int i=0;i<s.length()-1;i++) m[s.substr(i,2)]++;
    for(map<string, int>::iterator it=m.begin();it!=m.end();it++)
    {
        if(it->second>num)
        {
            num=it->second;
            ans=it->first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
