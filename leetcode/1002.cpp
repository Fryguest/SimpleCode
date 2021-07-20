class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int a[26], b[26];
        memset(a,63,sizeof(a));
        for (string s : A)
        {
            memset(b,0,sizeof(b));
            for (char c : s) b[c - 'a']++;
            for (int i = 0; i < 26; i++) a[i]=min(a[i], b[i]);
        }
        vector<string> res;
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                res.emplace_back(1, char(i + 'a'));
            }
        }
        return res;
    }
};
