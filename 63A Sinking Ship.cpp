#include <bits/stdc++.h>
using namespace std;
const int N=105;
string s1[N],s2[N];
int main()
{
    map<string,int>m;
    m.clear();
    m["rat"]=0;
    m["woman"]=1;
    m["child"]=1;
    m["man"]=2;
    m["captain"]=3;
    int n;
    while (cin>>n)
    {
        for (int i=1;i<=n;i++) cin>>s1[i]>>s2[i];
        for (int i=1;i<=n;i++)
        {
            for (int j=n;j>i;j--)
            {
                if (m.at(s2[j])<m.at(s2[j-1]))
                {
                    swap(s2[j],s2[j-1]);
                    swap(s1[j],s1[j-1]);
                }
            }
        }
        for (int i=1;i<=n;i++) cout<<s1[i]<<endl;
    }
    return 0;
}
