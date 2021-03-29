class Solution {
public:
    const int M = 1e9+7;
    long long inline cal(long long x)
    {
        return x * (x + 1)/2;
    }

    int countOrders(int n) {
        if(n==1) return 1;
        long long x = 1;
        for (int i=2;i<=n;i++)
        {
            x *= cal(2 * i - 1);
            x %= M;
        }
        return x;
    }
};
