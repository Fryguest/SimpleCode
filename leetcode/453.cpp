class Solution {
public:
    int minMoves(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int minn = nums[0], sum = 0;
        for (int x : nums) {minn = min(minn, x); sum += x;}
        return sum -= minn * nums.size();
    }
};
