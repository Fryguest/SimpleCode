#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    stack<char>st;
    while(t--)
    {
        while(!st.empty()) st.pop();
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if (st.empty()||s[i]==st.top()) st.push(s[i]);
            else st.pop();
        }
        if ((s.length()-st.size())/2%2)cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    return 0;
}
