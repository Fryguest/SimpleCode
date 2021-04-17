class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], cal = 0;
        for (int x : nums)
        {
            if (cal == 0){ans = x; cal++;}
            else if (ans == x) { cal++;}
            else cal--;
        }
        return ans;
    }
};
