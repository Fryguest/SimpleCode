class Solution {
public:
    string thousandSeparator(int n) {
        if (n == 0) return "0";
        vector<int> v;
        while (n)
        {
            v.push_back(n % 10);
            n /= 10;
        }
        string res;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (i != v.size() - 1 and i % 3 == 2) res += '.';
            res += char('0' + v[i]);
        }
        return res;
    }
};
