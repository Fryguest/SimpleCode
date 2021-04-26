class Solution {
public:
    int countBinarySubstrings(string s) {
        char c = ' ';
        int last = 0, now = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                now++;
            }
            else 
            {
                c = s[i];
                ans += min(last, now);
                last = now;
                now = 1;
            }
        }
        ans += min(last, now);
        return ans;
    }
};
