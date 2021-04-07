class Solution {
public:
	int maximumScore(vector<int>& nums, int k) {
	    int l = k, r = k;
	    while (l >= 0 and nums[l] >= nums[k]) l--;
	    while (r < nums.size() and nums[r] >= nums[k]) r++;
	    int ans = (r - l - 1) * nums[k];
	    
	    while (l >= 0 and r < nums.size())
	    {
			if (nums[l] >= nums[r])
			{
				int minn = nums[l];
				while (l >= 0 and nums[l] >= minn) l--;
				ans = max(ans, minn * (r - l - 1));
			}
			else
			{
				int minn = nums[r];
				while (r < nums.size() and nums[r] >= minn) r++;
				ans = max(ans, minn * (r - l - 1));
			}
		}
		{
			if (r < nums.size())
			{
				int minn = nums[r];
				while (r < nums.size() and nums[r] >= minn) r++;
				ans = max(ans, minn * (r - l - 1));
			}
			if (l >= 0)
			{
				int minn = nums[l];
				while (l >= 0 and nums[l] >= minn) l--;
				ans = max(ans, minn * (r - l - 1));
			}
		}
	    return ans;
	}
};
