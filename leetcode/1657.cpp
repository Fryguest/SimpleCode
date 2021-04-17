class Solution {
public:
    bool check1(const string& s1, const string& s2)
    {
        int a1[26]={0}, a2[26]={0};
        for (int i = 0; i < s1.length(); i++) 
        {
            a1[s1[i]-'a']++;
        }
        for (int i = 0; i < s2.length(); i++) 
        {
            a2[s2[i]-'a']++;
        }
        for (int i = 0; i < 26; i++) if ((a1[i] == 0) != (a2[i] == 0)) return false;
        sort(a1, a1+26);
        sort(a2, a2+26);
        for (int i = 0; i < 26; i++) if (a1[i] != a2[i]) return false;
        return true;
    }
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;
        if (!check1(word1, word2)) return false;
        return true;
    }
};
