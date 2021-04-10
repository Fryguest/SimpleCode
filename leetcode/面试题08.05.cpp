class Solution {
public:
    int multiply(int A, int B) {
        int result = 0;
        long long x = A;
        while (B)
        {
            if (B&1) result+=x;
            x+=x;
            B>>=1;
        }
        return result;
    }
};
