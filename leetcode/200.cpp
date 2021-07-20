class Solution {
public:
    int gox[4]={1,-1,0,0};
    int goy[4]={0,0,1,-1};
    void go(vector<vector<char>>& v, int x, int y)
    {
        if (x < 0 or x >= v.size() or y < 0 or y >= v[0].size()) return;
        if (v[x][y] == '0') return;
        v[x][y]='0';
        for (int i = 0; i < 4; i++)
        {
            go(v, x + gox[i], y + goy[i]);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans =0;
        for (int i = 0; i < grid.size();i++)
        {
            for (int j = 0; j < grid[i].size();j++)
            {
                if (grid[i][j] == '1')
                {
                    ans++;
                    go(grid, i, j);
                }
            }
        }
        return ans;
    }
};
