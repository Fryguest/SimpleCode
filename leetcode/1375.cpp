class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int maxn = 0;
        int result = 0;
        for (int i = 0; i < light.size(); i++)
        {
            maxn = max(light[i], maxn);
            if (maxn == i + 1) result++;
        }
        return result;
    }
};
