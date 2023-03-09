#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
map<int,int>m;
int num,n;
int solve()
{
    for(int i=1;i<=n;i++)
    {
        if (m[a[i]]>1)
        {
            if (num==1) return i;
            num--;
        }
        m[a[i]]--;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m.clear();
        num=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if (m[a[i]]>1) num++;
        }
        cout<<solve()<<endl;
    }
    return 0;
}
