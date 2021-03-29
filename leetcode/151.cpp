class Solution {
public:
    string reverseWords(string s) {
        istringstream sin(s);
        string result="";
        string temp;
        vector<string> v;
        while (sin>>temp) v.emplace_back(temp);
        for (int i=v.size()-1;i>=0;i--)
        {
            if (result.length()!=0) result+=" ";
            result+=v[i];
        }
        return result;
    }
};
