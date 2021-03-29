class Solution {
public:
    int cal(long long x, int d)
    {
        int res;
        while(d--) {res = x % 10; x/=10;}
        return res; 
    }
    int findNthDigit(int n) {
        if (n<10) return n;

        long long x = 9;
        long long c = 1;
        int cnt = 1;
        while (n > x * c * cnt)
        {
            n -= x * c * cnt;
            c *= 10;
            cnt++;
        }
        n--;
        c+=n/cnt;
        n%=cnt;
        return cal(c, cnt - n);
    }
};
