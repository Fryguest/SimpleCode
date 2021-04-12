class Solution {
public:
    int trailingZeroes(int n) {
        long long x = 5;
        long long ans =0;
        while (x <= n)
        {
            ans += n / x;
            x *= 5;
        }
        return ans;
    }
};
