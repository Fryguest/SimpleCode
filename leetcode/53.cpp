class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int minn=0;
        int result=nums[0];
        int sum=0;
        for (int x:nums)
        {
            sum+=x;
            result=max(result, sum-minn);
            minn=min(sum,minn);
        }
        return result;

    }
};
