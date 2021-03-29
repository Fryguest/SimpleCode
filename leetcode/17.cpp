class Solution {
public:
    string m[10]={"", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> result;
    void dfs(int d,string s, string& digits)
    {
        if (d==digits.length())
        {
            result.emplace_back(s);
            return;
        }
        for (int i=0;i<m[digits[d]-'0'].length();i++)
        {
            dfs(d+1,s+m[digits[d]-'0'][i], digits);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        if (digits.length()==0) return result;
        dfs(0,"", digits);
        return result;
    }
};
