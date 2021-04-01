class Solution {
public:
    string cal(int a, int b)
    {
        if (a == b) 
        {
            return to_string(a);
        }
        else 
        {
            return to_string(a) + "->" + to_string(b);
        }
    }
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.size() == 0) return res;
        int l = nums[0];
        for (int i = 1; i<nums.size(); i++)
        {
            if (nums[i] == nums[i-1] + 1) 
            {
                continue;
            }
            else 
            {
                res.push_back(cal(l, nums[i-1]));
                l=nums[i];
            }
        }
        res.push_back(cal(l, nums[nums.size()-1]));
        return res;
    }
};
