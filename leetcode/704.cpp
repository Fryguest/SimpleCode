class Solution {
public:
    int find(vector<int>& num, int l, int r, int target)
    {
        if (l > r) return -1;
        int mid = (l + r) / 2;
        if (num[mid] == target) return mid;
        else if (num[mid] > target) return find(num, l, mid-1, target);
        else return find(num, mid+1, r, target);
    }
    int search(vector<int>& nums, int target) {
        return find(nums, 0, nums.size()-1, target);
    }
};
