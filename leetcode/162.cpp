class Solution {
public:
    int find(vector<int>& num, int l, int r)
    {
        if (l == r) return l;
        if (l == r - 1)
        {
            if (num[l] > num[r]) return l;
            else return r;
        }
        int mid = (l + r) / 2;
        if (num[mid - 1] > num[mid]) return find(num, l, mid - 1);
        else if (num[mid + 1] > num[mid]) return find(num, mid + 1, r);
        else return mid;
    }
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        if (nums[0]>nums[1]) return 0;
        if (nums[nums.size()-1] > nums[nums.size()-2]) return nums.size()-1;
        return find(nums, 1, nums.size()-2);
    }
};
