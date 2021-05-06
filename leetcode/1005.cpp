class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        int x = 0;
        while(true)
        {
            if (A[x] < 0 and K > 0) 
            {
                A[x] = -A[x];
                K--;
            }
            else break;
            x++;
        }
        sort(A.begin(), A.end());
        int ans = 0;
        for (int i = 0; i < A.size(); i++)  ans+=A[i];
        if (K%2) ans -= A[0]*2;
        return ans;
    }
}; 
