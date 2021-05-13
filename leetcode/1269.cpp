class Solution {
public:
    int dp[505][505];
    const int mod = 1e9+7;
    int numWays(int steps, int arrLen) {
        memset(dp, 0, sizeof(dp));
        dp[0][0]=1;
        for (int i=1;i<=steps;i++)
        {
            for (int j=0;j<=steps;j++)
            {
                if (j>=arrLen) dp[i][j]=0;
                else if (j==0) dp[i][j]=(dp[i-1][j]+dp[i-1][j+1])%mod;
                else if (j==arrLen-1) dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
                else dp[i][j]=((dp[i-1][j]+dp[i-1][j-1])%mod+dp[i-1][j+1])%mod;
            }
        }
        return dp[steps][0];
    }
};
