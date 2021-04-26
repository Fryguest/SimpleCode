class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int>l, d;
        int ans = 1, de = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (l.find(nums[i]) == l.end())
            {
                l[nums[i]] = i;
                d[nums[i]] = 1;
            }
            else 
            {
                const int& x = ++ d[nums[i]];
                if (x > de)
                {
                    de = x;
                    ans = i - l[nums[i]] + 1;
                }
                else if (x == de)
                {
                    ans = min(i - l[nums[i]] + 1, ans);
                }
            }
        }
        return ans;
    }
};
