class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool v[52];
        memset(v,0,sizeof(v));
        for (char c : letters)
        {
            v[c - 'a'] = v[c - 'a' + 26] = true;
        }
        for (int x = target - 'a' + 1;; x++)
        {
            if (v[x]) return x%26 + 'a';
        }
    }
};
