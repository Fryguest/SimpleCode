class Solution {
public:
    bool check(vector<int>&num, int a, int b)
    {
        if (a < 0 or b >= num.size()) return true;
        return num[a]<=num[b];
    }
    bool checkPossibility(vector<int>& num) {
        int cnt = 0;
        for (int i = 1; i < num.size(); i++)
        {
            if (num[i]<num[i-1])
            {
                if (cnt) return false;
                if (check(num, i-2, i) or check(num, i-1, i+1)) cnt++;
                else return false;
            }
        }
        return cnt <= 1;
    }
};
