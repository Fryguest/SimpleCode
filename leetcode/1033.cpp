class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
         vector<int> v = {a, b, c};
         sort(v.begin(), v.end());
         int maxn = v[2] - v[0] - 2;
         int minn = min(v[1] - v[0] - 1, 1) + min(v[2] - v[1] - 1, 1);
         minn = min(minn, max(v[1] - v[0] - 1, 1));
         minn = min(minn, max(v[2] - v[1] - 1, 1));

         return {minn, maxn};
    }
};
