#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string a,b;
int s[N];
bool cal(const string& a, const string& b)
{
    int x = 0;
    for (int i=0;i<a.length();i++)
    {
        if (b[x] == a[i])
        {
            x++;
            if (x==b.length()) return true;
        }
    }
    return false;
}
int check(int x)
{
    bool v[N];
    memset(v,0,sizeof(v));
    for (int i=a.length()-1;i>=x;i--)
    {
        v[s[i]-1]=true;
    }
    string left="";
    for (int i=0;i<a.length();i++)
    {
        if (v[i]) left+=a[i];
    }
//    cout << left<<endl;
    if (cal(left, b)) return true;
    else return false;
}
int main()
{
    while (cin>>a>>b)
    {
        for (int i=0;i<a.length();i++) cin>>s[i];
        int l=0,r=a.length()-1;
        int ans;
        while (l<=r)
        {
            int mid = (l+r)/2;
            if (check(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;

    }
    return 0;
}
