class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for (int x : arr) sum += x;
        if (sum % 3) return false;
        int count = 0;
        int s = 0;
        for (int x : arr) 
        {
            s += x;
            if (s == sum/3)
            {
                s = 0;
                count++;
            }
        }
        if (count >= 3) return true;
        return false;
    }
};
