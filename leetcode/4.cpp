class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        #define len1 nums1.size()
        #define len2 nums2.size()
        vector<int>v;
        int a=0,b=0;
        while (a<len1 and b<len2)
        {
            if (nums1[a] <= nums2[b]) v.emplace_back(nums1[a++]);
            else v.emplace_back(nums2[b++]);
        }
        while (a<len1) v.emplace_back(nums1[a++]);
        while (b<len2) v.emplace_back(nums2[b++]);
        if (v.size()&1) return v[v.size()/2];
        else return (v[v.size()/2]+v[v.size()/2-1])/2.0;
    }
};
