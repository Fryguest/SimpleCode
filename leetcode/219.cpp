class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& num, int k) {
        unordered_map<int, int>m;
        for (int i = 0; i < num.size(); i++)
        {
            if (m.find(num[i]) != m.end() and i - m[num[i]] <= k) return true;
            m[num[i]]=i;
        }
        return false;
    }
};
