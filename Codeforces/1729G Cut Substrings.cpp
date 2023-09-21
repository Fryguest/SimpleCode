#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N=505;
bool v[N];
int dp[N][N][2];
bool cal(const string& a, const string& b, int x)
{
    if(x<b.size()-1) return false;
    for(int i=0;i<b.size();i++)if (b[i]!=a[x-b.size()+i+1]) return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while(t--)
    {
        cin>>s1>>s2;
        memset(v,0,sizeof(v));
        for (int i=0;i<s1.size();i++) v[i]=cal(s1,s2,i);
//        for (int i=0;i<s1.size();i++) cout<<v[i]<<" ";cout<<endl<<endl;
        memset(dp,0,sizeof(dp));
        for (int j=0;j<=s1.size()/s2.size();j++)
        {
            for (int i=0;i<s1.size();i++)
            {
                if (v[i])
                {
                    if (j==0)
                    {
                        dp[i][j][0]=0;
                        dp[i][j][1]=0;
                    }
                    else
                    {
                        dp[i][j][0]=0;
                        for (int k=i-s2.size()+1;k<i;k++)
                        {
                            dp[i][j][0]=(dp[i][j][0]+dp[k][j][1])%mod;
                        }
                        if (i>=s2.size()) dp[i][j][1]=(dp[i-s2.size()][j-1][0]+dp[i-s2.size()][j-1][1])%mod;
                        else if (j==1) dp[i][j][1]=1;
                        else dp[i][j][1]=0;
                    }
                }
                else
                {
                    dp[i][j][1]=0;
                    if (i==0)
                    {
                        if (j==0)dp[i][j][0]=1;
                        else dp[i][j][0]=0;
                    }
                    else dp[i][j][0]=(dp[i-1][j][0]+dp[i-1][j][1])%mod;
                }
            }
        }
        for (int j=0;j<=s1.size()/s2.size();j++)
        {
            if (dp[s1.size()-1][j][0]+dp[s1.size()-1][j][1])
            {
                cout<<j<<" "<<(dp[s1.size()-1][j][0]+dp[s1.size()-1][j][1])%mod<<endl;
                break;
            }
        }
//        for (int j=0;j<=s1.size()/s2.size();j++)
//        {
//            for (int i=0;i<s1.size();i++)
//            {
//                cout<<dp[i][j][0]+dp[i][j][1]<<" ";
//            }cout<<endl;
//        }
//        cout<<endl;

//        for (int j=0;j<=s1.size()/s2.size();j++)
//        {
//            for (int i=0;i<s1.size();i++)
//            {
//                cout<<dp[i][j][1]<<" ";
//            }cout<<endl;
//        }
//        cout<<endl;
    }
    return 0;
}

