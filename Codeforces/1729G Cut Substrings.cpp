#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int N=505;
bool v[N];
int dp[N][N];
bool cal(const string& a, const string& b, int x)
{
    if (x+b.size()>a.size()) return false;
    for (int i=0;i<b.size();i++) if (b[i]!=a[x+i]) return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        memset(v,0,sizeof(v));
        for (int i=0;i<a.size();i++) v[i]=cal(a,b,i);
        memset(dp,0,sizeof(dp));
        int I=a.size(), J=a.size()/b.size();
        for (int i=0;i<I;i++) dp[i][0]=1;
        for (int j=1;j<=J;j++)
        {
            for (int i=0;i<I;i++)
            {
                if (v[i])
                {
                    if (i>=b.size())
                    {
                        dp[i][j]=(dp[i-1][j]+dp[i-b.size()][j-1])%mod;
                    }
                    else
                    {
                        if (j==1)
                        {
                            if(i>0) dp[i][j]=1+dp[i-1][j];
                            else dp[i][j]=1;
                        }
                        else
                        {
                            dp[i][j]=0;
                        }
                    }
                }
                else
                {
                    if (i==0) dp[i][j]=0;
                    else dp[i][j]=dp[i-1][j];
                }
            }
        }
        int ans1=-1, ans2=-1;
        for (int j=0;j<=J;j++)
        {
            for (int i=0;i<I;i++)
            {
                cout<<dp[i][j]<<" ";
            }cout<<endl;
        }
        for (int i=0;i<I;i++)
        {
            for (int j=0;j<=J;j++)
            {
                if (dp[i][j]>0)
                {
                    if (j>ans1 || (j==ans1 && dp[i][j]>ans2))
                    {
                        ans1=j;
                        ans2=dp[i][j];
                    }
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}