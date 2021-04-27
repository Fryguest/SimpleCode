class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int pre = 0;
        for (int i = 0; i < bits.size() - 1; i++)
        {
            if (bits[i] == 0) pre = 0;
            else if (bits[i] == 1) pre = 1 - pre;
        }
        return pre == 0;
    }
};
