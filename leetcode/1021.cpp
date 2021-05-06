class Solution {
public:
    string removeOuterParentheses(string s) {
        int l = 0;
        int count = 0;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(') count++;
            else count--;
            if (count == 0)
            {
                for (int j = l + 1; j < i; j++) res += s[j];
                l = i + 1;
            }
        }
        return res;
    }
};
