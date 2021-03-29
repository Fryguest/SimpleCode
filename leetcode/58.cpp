class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream sin(s);
        string result;
        while(sin>>result){};
        return result.length();
    }
};
