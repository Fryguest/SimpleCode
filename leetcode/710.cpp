class Solution {
public:
    int N;
    unordered_map<int, int> v;
    Solution(int N, vector<int>& blacklist) {
        sort(blacklist.begin(), blacklist.end(), [](int a, int b){return a>b;});
        int x = N-1;
        for (int num : blacklist)
        {
            if (num>=N-blacklist.size()) v[num] = num;
            else
            {
                while (v.find(x)!=v.end()) x--;
                v[num]=x--;
            }
        }
        this->N = N-blacklist.size();
    }
    
    int pick() {
        int x = rand()%N;
        auto it = v.find(x);
        if (it == v.end()) return x;
        else return it->second;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(N, blacklist);
 * int param_1 = obj->pick();
 */
