#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
int main()
{
    int t,n,k,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%s",&n,&k,s);
        ans=0;
        for(int i=0;i<n;i++)
        {
            if (s[i]=='B')
            {
                ans++;
                i+=k-1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
