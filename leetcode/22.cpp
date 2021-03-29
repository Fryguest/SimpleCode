class Solution {
public:
    void dfs(vector<string>&result, string s, int d, int n)
    {
        if (s.length()==n*2)
        {
            result.emplace_back(s);
            return;
        }
        if (d>0)  dfs(result,s+")",d-1,n);
        if (n*2-s.length()>d) dfs(result,s+"(",d+1,n);
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        dfs(result,"",0,n);
        return result;
    }
};
