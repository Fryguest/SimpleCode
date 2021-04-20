class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int num[10][10];
        memset(num, 0, sizeof(num));
        int ans = 0;
        for (auto v : dominoes)
        {
            ans += num[v[0]][v[1]];
            num[v[0]][v[1]]++;
            if (v[0]!=v[1])
            num[v[1]][v[0]]++;
        }
        return ans;
    }
};
