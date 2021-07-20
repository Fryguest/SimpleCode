class Solution {
public:
    int findComplement(int num) {
        if (!num) return 1;
        vector<int> v;
        while (num) {v.push_back(num&1); num>>=1;}
        int ans = 0;
        for (int i = v.size()-1; i>=0;i--) {ans<<=1;ans|=(1-v[i]);}
        return ans;
    }
};
