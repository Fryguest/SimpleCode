class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> m={{'}','{'}, {']','['}, {')','('}};
        stack<char> sta;
        for (int i=0;i<s.length();i++){
            if (m.find(s[i])==m.end()) sta.push(s[i]);
            else {
                if (sta.empty() or sta.top() != m[s[i]]) return false;
                sta.pop();
            }
        }
        return sta.empty();
    }
};
