class Solution {
public:
    string compressString(string S) {
        if (S.length() == 0) return S;
        string res = "";
        int cnt = 1;
        char c = S[0];
        for (int i = 1; i < S.length(); i++)
        {
            if (S[i] != S[i-1])
            {
                res += c;
                res += to_string(cnt);
                cnt = 1;
                c = S[i];
            }
            else
            {cnt++;}
        }
        res += c;
        res += to_string(cnt);
        
        if (res.length() >= S.length()) return S;
        return res;
    }
};
