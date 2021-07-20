class Solution {
public:
    inline void add(vector<vector<int>>& res, int x, int y, int R, int C)
    {
        if (x < 0 or x >= R or y < 0 or y >= C) return;
        res.push_back({x,y});
    }
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> res; 
        res.push_back({r0, c0});
        for (int k = 1; k <= R + C; k++)
        {
            add(res, r0 - k, c0, R, C);
            add(res, r0 + k, c0, R, C);
            add(res, r0, c0 + k, R, C);
            add(res, r0, c0 - k, R, C);
            for (int i = 1; i < k; i++)
            {
                add(res, r0 + i, c0 + k - i, R, C);
                add(res, r0 + i, c0 - k + i, R, C);
                add(res, r0 - i, c0 + k - i, R, C);
                add(res, r0 - i, c0 - k + i, R, C);
            }
        }
        return res;
    }
};
