class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> m = {'a','e','i','o','u','A','E','I','O','U'};
        int l=0, r=0;
        for (int i = 0; i < (s.length() / 2); i++)
        {
            if (m.find(s[i]) != m.end()) l++;
        }
        for (int i = s.length()/2; i < s.length(); i++)
        {
            if (m.find(s[i]) != m.end()) r++;
        }
        return l == r;
    }
};
