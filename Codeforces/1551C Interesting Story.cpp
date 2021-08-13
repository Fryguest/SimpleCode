#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cal(const string& s)
{
    vector<int>temp(5,0);
    for (int i = 0;i<s.length();i++)
    {
        temp[s[i]-'a']++;
    }
    temp.emplace_back(s.length());
    return temp;
}

int x;
bool comp(const vector<int>& a, const vector<int>& b)
{
    return a[5]-a[x]-a[x]<b[5]-b[x]-b[x];
}

vector<vector<int> > v;
int solve()
{
    sort(v.begin(),v.end(), comp);
    int sum1=0,sum2=0;
    for (int i=0;i<v.size();i++)
    {
        sum1+=v[i][x];
        sum2+=v[i][5]-v[i][x];
        if (sum2>=sum1) return i;
    }
    return v.size();
}

int main()
{
    int t,n;
    string s;
    cin>>t;
    while (t--)
    {
        v.clear();
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>s;
            v.emplace_back(cal(s));
        }
        int ans=0;
        for (x=0;x<5;x++)
        {
            ans=max(ans, solve());
        }

        cout<<ans<<endl;
    }
    return 0;
}

