class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i< nums.size(); i++)
        {
            if (i == 0 and nums[i] >= 0) {x = 0;break;}
            if (i == nums.size() -1 and nums[i] < 0) {x = i+1; break;}
            if (nums[i]>=0) {x = i; break;}
        }
        int l = x - 1, r = x;
        vector<int> result;
        while (l >= 0 and r < nums.size())
        {
            if (abs(nums[l]) >= abs(nums[r]))
            {
                result.emplace_back(nums[r] * nums[r]);
                r++;
            }
            else 
            {
                result.emplace_back(nums[l] * nums[l]);
                l--;
            }
        }
        while (l >= 0)
        {
            result.emplace_back(nums[l] * nums[l]);
            l--;
        }
        while (r < nums.size())
        {
            result.emplace_back(nums[r] * nums[r]);
            r++;
        }
        return result;
    }
};
