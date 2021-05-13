class Solution {
public:
    bool check(string& a, string& b)
    {
        for (int i = 0;i < b.length();i++)
        {
            if (b[i]!=a[i%a.length()]) return false;
        }
        return true;
    }
    string gcdOfStrings(string str1, string str2) {
        string s = "", ans = "";
        for (int i = 0; i < str1.length() and i < str2.length();i++)
        {
            if (str1[i]!=str2[i]) break;
            s+=str1[i];
            if (str1.length() % (i + 1) == 0 and str2.length() % (i + 1) == 0 and check(s, str1) and check(s, str2))
            {
                ans = s;
            }
        }
        return ans;
    }
};
