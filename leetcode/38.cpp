class Solution {
public:
    string cal(string s)
    {
        string result="";
        int num=0;
        for (int i=0;i<s.length();i++)
        {
            if (i==s.length()-1 or s[i+1]!=s[i])
            {
                result+=std::to_string(num+1);
                result+=s[i];
                num=0;
            }
            else num++;
        }
        return result;
    }
    string countAndSay(int n) {
        string result="1";
        for (int i=1;i<=n-1;i++) result=cal(result);
        return result;
    }
};
