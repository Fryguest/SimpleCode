#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int a[N];
int main()
{
    int n,h;
    int ans;
    bool flag;
    vector<int>v;
    while (cin>>n>>h)
    {
        for (int i=1;i<=n;i++) cin>>a[i];
        flag=true;
        v.clear();
        for (int i=1;i<=n;i++)
        {
            v.push_back(a[i]);
            sort(v.begin(),v.end(), [](int a, int b){return a>b;});

            long long temp=0;
            for (int i=0;i<v.size();i+=2)
            {
                temp+=v[i];
                if (temp>h) flag=false;
            }
            if (!flag)
            {
                ans=i-1;
                break;
            }
        }
        if (flag) cout << n <<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
