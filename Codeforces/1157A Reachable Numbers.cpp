#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    set<int>s;
    while(cin>>n)
    {
        ans=0;
        s.clear();
        while(1)
        {
            if (s.find(n)!=s.end()) break;
            ans++;
            s.insert(n);
            n++;
            while (n%10==0) n/=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}
