class Solution {
public:
    int reverse(int x) {
        long long max = (((long long)1)<<31)-1;
        long long min = -(((long long)1)<<31);
        string s = to_string(x);
        if (s[0]=='-') std::reverse(s.begin()+1, s.end());
        else std::reverse(s.begin(), s.end());
        long long result = stoll(s);
        if (result>max||result<min) return 0;
        return (int)result;
    }
};
