class Solution {
public:
    bool check(int x)
    {
        int n = x;
        while (x)
        {
            if (x%10 == 0 or n%(x%10)) return false;
            x/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i = left; i <= right; i++)
        {
            if (check(i)) v.push_back(i);
        }
        return v;
    }
};
