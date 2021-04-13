class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int ans = 0;
        for (int i = 0; i < guess.size(); i++)  ans += (guess[i] == answer[i]? 1:0);
        return ans;
    }
};
