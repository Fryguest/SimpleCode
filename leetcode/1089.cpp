class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> q;
        for (int x : arr) q.push(x);
        for (int i = 0; i < arr.size(); i++)
        {
            int x = q.front(); q.pop();
            if (x) arr[i] = x;
            else {
                if (i == arr.size() -1) arr[i] = x;
                else arr[i] = arr[i+1] = x;
                i++;
            }
        }
        return;
    }

