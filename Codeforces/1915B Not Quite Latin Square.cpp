#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    map<char, int>m;
    char x;
    cin>>t;
    while(t--)
    {
        m.clear();
        for(int i=0;i<9;i++)
        {
            scanf(" %c", &x);
            m[x]++;
        }
        if (m['A']!=3) cout<<'A'<<endl;
        if (m['B']!=3) cout<<'B'<<endl;
        if (m['C']!=3) cout<<'C'<<endl;
    }
    return 0;
}
