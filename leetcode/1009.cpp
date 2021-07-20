class Solution {
public:
    int bitwiseComplement(int N) {
        if (!N) return 1;
        vector<int> v;
        while (N) {v.push_back(N&1); N>>=1;}
        int ans = 0;
        for (int i = v.size()-1; i>=0;i--) {ans<<=1;ans|=(1-v[i]);}
        return ans;
    }
};
