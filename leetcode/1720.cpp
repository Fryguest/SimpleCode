class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res = {first};
        for (int x : encoded) res.emplace_back(res.back()^x);
        return res;
    }
};
