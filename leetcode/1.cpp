class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>results;
        for (int i=0;i<nums.size();i++)
        {
            if(results.size()) break;
            for (int j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    results.push_back(i);
                    results.push_back(j);
                    break;
                }
            }
        }
        return results;
    }
};
