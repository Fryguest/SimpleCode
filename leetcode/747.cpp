class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        int a[2]={-1,-1};
        for (int i = 0; i < nums.size(); i++)
        {
            if (a[0] == -1 or nums[i] > nums[a[0]]) {a[1] = a[0]; a[0] = i;}
            else if (a[1] == -1 or nums[i] > nums[a[1]]) {a[1] = i;};
        }
        if (nums[a[0]] >= 2 * nums[a[1]]) return a[0];
        else return -1;
    }
};
