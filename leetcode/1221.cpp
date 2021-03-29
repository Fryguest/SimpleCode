class Solution {
public:
    int balancedStringSplit(string s) {
        int x = 0;
        int ans=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='R') x++;
            else x--;
            if (x==0) ans++;
        }
        return ans;
    }
};
