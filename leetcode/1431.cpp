class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxn = 0;
        for (int o : candies) maxn = max(o, maxn);
        vector<bool> v;
        for (int o : candies) v.push_back(maxn - o <= extraCandies); 
        return v;
    }
};
