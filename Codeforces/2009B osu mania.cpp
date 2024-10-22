#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    char c;
    vector<int>result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        result.clear();
        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=4;j++)
            {
                cin>>c;
                if (c=='#') result.emplace_back(j);
            }
        }
        for (int i=result.size()-1;i>=0;i--)
        {
            if (i!=result.size()-1) cout<<" ";
            cout<<result[i];
        }
        cout<<endl;

    }
    return 0;
}
