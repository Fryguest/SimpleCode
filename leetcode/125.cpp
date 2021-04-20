class Solution {
public:
    bool check(char c)
    {
        return (c >= '0' and c <= '9') or (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
    }
    bool equal(char a, char b)
    {
        if (a >='A' and a <= 'Z') a += 32;
        if (b >='A' and b <= 'Z') b += 32;
        return a == b;
    }
    bool isPalindrome(string s) {
        int l = 0, r = s.length() -1;
        while (l < s.length() and r >= 0)
        {
            while(l < s.length() and !check(s[l])) l++;
            while(r >= 0 and !check(s[r])) r--;
            if (l >= r) return true;
            if (!equal(s[l], s[r])) return false;
            l++;r--;
        }
        return true;
    }
};
