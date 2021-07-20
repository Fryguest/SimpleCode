class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int> s(1, 0);
        for (int x : arr) s.push_back(x ^ s.back());
        unordered_map<int, int> m1, m2;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (m1.find(s[i]) == m1.end())
            {
                m1[s[i]] = 1;
                m2[s[i]] = i;
            }
            else
            {
                ans += m1[s[i]] * (i - 1) - m2[s[i]];
                m1[s[i]]++;
                m2[s[i]]+=i;
            }
        }
        return ans;
    }

