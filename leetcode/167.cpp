class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r)
        {
            if (target == numbers[l] + numbers[r])  return {l + 1,r + 1};
            else if (numbers[l] + numbers[r] > target) r--;
            else if (numbers[l] + numbers[r] < target) l++;
        }
        return {0,0};
    }
};
