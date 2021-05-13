class Solution {
public:
    int cal(int n)
    {
        int x = 0;
        while (n)
        {
            int a = n%10;
            x+=a*a;
            n/=10;
        }
        return x;
    }
    bool isHappy(int n) {
        for (int i = 0 ; i < 100; i++)
        {
            n = cal(n);
            if (n==1) return true;
        }
        return false;
    }
};
