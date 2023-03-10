#include<bits/stdc++.h>
using namespace std;
const int N=105;
char a[N][N];
int main()
{
    int n,num;
    string s;
    cin>>n>>s;
    num=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='n')num++;
    }
    if (num==0)
    {
        for(int i=0;i<s.length()/4;i++)
        {
            if(i)cout<<" ";
            cout<<0;
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<num;i++)
        {
            if(i)cout<<" ";
            cout<<1;
        }
        for(int i=0;i<(s.length()-num*3)/4;i++) cout<<" 0";
        cout<<endl;
    }
    return 0;
}
