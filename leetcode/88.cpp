class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>&v1 = nums1, &v2=nums2;
        int a=m-1, b=n-1;
        int i;
        for (i=m+n-1;i>=0 and a>=0 and b>=0;i--)
        {
            if (v1[a]>v2[b]) 
            {
                v1[i]=v1[a];
                a--;
            } 
            else 
            {
                v1[i]=v2[b];
                b--;
            }
        }
        while (a>=0) v1[i--]=v1[a--];
        while (b>=0) v1[i--]=v2[b--];
    }
};
