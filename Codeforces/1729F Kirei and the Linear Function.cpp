#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
char s[N];
int len;
int sum[N];
int vis[9][2];
void writeAns(int a,int b, int& ans1, int& ans2)
{
    if (a==-1||b==-1) return;
    if (ans1==-2&&ans2==-2)
    {
        ans1=a;
        ans2=b;
    }
    else if (ans1>a)
    {
        ans1=a;
        ans2=b;
    }
    else if (ans1==a && ans2>b)
    {
        ans1=a;
        ans2=b;
    }
    return;
}
int main()
{
    int t;
    int w,m;
    int l,r,k;
    int ans1,ans2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s); len=strlen(s);
        memset(sum,0,sizeof(sum));
        for (int i=len-1;i>=0;i--)
        {
            sum[i]=(sum[i+1]+s[i]-'0')%9;
        }
        scanf("%d%d", &w, &m);
        memset(vis, -1, sizeof(vis));
        for(int i=0;i+w-1<len;i++)
        {
            int x=(sum[i]-sum[i+w]+9)%9;
            if (vis[x][0]==-1){
                vis[x][0]=i;
            }else if (vis[x][1]==-1){
                vis[x][1]=i;
            }
        }
        while(m--)
        {
            scanf("%d%d%d", &l,&r,&k);
            l--; r--;
            int x=(sum[l]-sum[r+1]+9)%9;

            ans1=ans2=-2;
            for (int i=0;i<9;i++)
            {
                for (int j=0;j<9;j++)
                {
                    if ((i*x+j)%9==k)
                    {
                        if (i==j) writeAns(vis[i][0], vis[i][1], ans1,ans2);
                        else writeAns(vis[i][0], vis[j][0], ans1,ans2);
                    }
                }
            }

            printf("%d %d\n",ans1+1,ans2+1);
        }
    }
    return 0;
}