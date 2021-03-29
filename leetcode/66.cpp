class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>& v=digits;
        int x=1;
        for (int i=v.size()-1;i>=0;i--)
        {
            v[i]+=x;
            x=v[i]/10;
            v[i]%=10;
        }
        vector<int>result;
        if (x) result.emplace_back(x);
        for (int x : v) result.emplace_back(x);
        return result;
    }
};
