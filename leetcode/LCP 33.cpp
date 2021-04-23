class Solution {
public:
    int storeWater(vector<int>& bucket, vector<int>& vat) {
        int ans = 10000 * 100;
        int maxn = 0;
        for (int i = 0; i< bucket.size(); i++)
        {
            maxn = max(maxn, vat[i]);
        }
        if (maxn == 0) return 0;
        for (int x = 1; x <= maxn; x++)
        {
            int cnt = x;
            for (int i = 0; i < bucket.size(); i++)
            {
                cnt += max((vat[i]+x-1)/x - bucket[i], 0);
                if (cnt >= ans) break;
            }
            ans = min(cnt, ans);
        }
        return ans;
    }
};
