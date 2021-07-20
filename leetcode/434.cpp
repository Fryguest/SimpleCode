class Solution {
public:
    int countSegments(string s) {
        istringstream sin(s);
        string str; 
        int ans = 0;
        while (sin>>str) ans++;
        return ans;
    }
};
