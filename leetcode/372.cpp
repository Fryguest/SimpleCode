class Solution {
public:
    const int M = 1337;
    int cal(int a, int b)
    {
        int x = 1;
        while (b--) {x=x*a%M;}
        return x;

    }
    int superPow(int a, vector<int>& b) {
        a %= M;
        int res = 1;
        int x = a;
        for (int i = b.size() - 1; i >= 0; i--)
        {
            res = res * cal(x, b[i]) % M;
            x = cal(x, 10) % M;
        }
        return res;
    }
};