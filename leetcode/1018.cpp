class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res;
        int num = 0;
        for (int x : A) 
        {
            num <<= 1; 
            num |= x; 
            if (num%5) res.push_back(false); 
            else res.push_back(true);
            num %= 5;
        }
        return res;
    }
};
