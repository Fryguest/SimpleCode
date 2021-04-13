class Solution {
public:
    void swap(int& a, int& b)
    {
        a ^= b; b ^= a; a ^= b;
    }
    int div(int a, int b)
    {
        int res;
        while(b != 1)
        {
            res = a%b;
            a = b; 
            b = res;
        }
        return res;
    }
    void add(int& a, int& b, int c)
    {
        b += a*c;
        // int t = div(b,a);
        // a/=t; b/=t;
    }
    vector<int> fraction(vector<int>& cont) {
        int a = 1, b = cont.back();
        for (int i = cont.size() - 2; i >= 0; i--)
        {
            swap(a, b);
            add(a, b, cont[i]);
        }
        return {b,a};
    }
};
