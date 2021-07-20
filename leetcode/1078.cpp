class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        istringstream sin(text);
        string s;
        if (first == second)
        {
            int cnt = 0;
            while (sin>>s)
            {
                if (cnt >= 2) res.push_back(s); 
                if (s == first) cnt++;
                else cnt = 0;
            }
        }
        else
        {
            bool a = false, b = false;
            while (sin>>s)
            {
                if (a and b)
                {
                    res.push_back(s);
                    a = b = false;
                }
                if (a and s == second)
                {
                    b = true;
                }
                else if (s == first)
                {
                    a = true;
                    b = false;
                }
                else
                {
                    a = b = false;
                }
            }
        }
        return res;
    }
};
