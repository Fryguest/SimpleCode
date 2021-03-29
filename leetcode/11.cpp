class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1;
        int maxn=0;
        while (l<r)
        {
            if (height[l]<height[r])
            {
                maxn=max((r-l)*height[l], maxn);
                l++;
            }
            else
            {
                maxn=max((r-l)*height[r], maxn);
                r--;
            }
        }
        return maxn;
    }
};
