class Solution {
public:
    int climbStairs(int n) {
        if (n==1) return 1;
        if (n==2) return 2;
        int a=1,b=2,x;
        for (int i=3;i<=n;i++)
        {
            x=a+b;
            a=b;
            b=x;
        }
        return x;
    }
};
