class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>m;
        for (int x : arr) m[x]++;
        int ans = -1;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->first == it->second) ans = max(ans, it->first);
        }
        return ans;
    }
};
