#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
int len;
vector<int> v[26];
vector<int> ans;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s",s); len=strlen(s);
        for (int i=0;i<26;i++) v[i].clear();
        for (int i=0;i<len;i++) v[s[i]-'a'].push_back(i+1);

        ans.clear();
        if (s[0]>s[len-1])
        {
            for (int i=s[0]-'a';i>=s[len-1]-'a';i--)
            {
                for (int j=0;j<v[i].size();j++)
                {
                    ans.push_back(v[i][j]);
                }
            }
        }
        else
        {
            for (int i=s[0]-'a';i<=s[len-1]-'a';i++)
            {
                for (int j=0;j<v[i].size();j++)
                {
                    ans.push_back(v[i][j]);
                }
            }
        }
        printf("%d %d\n", abs(s[0]-s[len-1]), ans.size());
        for (int i=0;i<ans.size();i++) printf("%d%c", ans[i], i==ans.size()-1?'\n':' ');
    }
    return 0;
}