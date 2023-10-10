#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
int len;
int main()
{
    int t;
    scanf("%d",&t);
    vector<int>v;
    int cnt,ans;
    while(t--)
    {
        scanf("%s",s);
        len=strlen(s);
        cnt=0;
        v.clear();
        for(int i=0;i<len;i++)
        {
            if (s[i]=='A') cnt++;
            else
            {
                v.emplace_back(cnt);
                cnt=0;
            }
        }
        v.emplace_back(cnt);
        sort(v.begin(),v.end());
        ans=0;
        for(int i=1;i<v.size();i++) ans+=v[i];
        printf("%d\n",ans);
    }
    return 0;
}
