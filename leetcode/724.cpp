class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) sum += x;
        int l = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (l * 2 == sum - nums[i]) return i;
            l += nums[i];
        }
        return -1;
    }
};
