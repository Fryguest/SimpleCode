class Solution {
public:
    int gox[4] = {1,-1,0,0};
    int goy[4] = {0,0,1,-1};
    void fill(vector<vector<int>>& image, int x, int y, int o, int n)
    {
        if (o == n) return;
        if (x < 0 or x >= image.size()) return;
        if (y < 0 or y >= image[0].size()) return;
        if (image[x][y] != o) return;
        image[x][y]=n;
        for (int i = 0;i < 4; i++)
        {
            fill(image, x + gox[i], y + goy[i], o, n);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
};
